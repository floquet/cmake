#-----------------------------*-cmake-*----------------------------------------#
# file   ${TEAMCITY_HOME}/CMakeLists.txt
# author Daniel Topa <dantopa@lanl.gov>  505 667 0817
# date   2017 Jul 28
# brief  Minimum Working Example for TeamCity build agent
# note   Copyright (C) 2017, Los Alamos National Security, LLC.
#        All rights reserved.
#------------------------------------------------------------------------------#
# $Id$
#------------------------------------------------------------------------------#

# at the command line:
# 1. navigate to directory with ${TEAMCITY_HOME}/mwe
# 2. mkdir build
# 3. cd to build
# 4. cmake ..
# 5. make
# 6. cd src
# 7. ./mwe

cmake_minimum_required ( VERSION 3.6.2 )
enable_language ( Fortran )
get_filename_component ( Fortran_COMPILER_NAME ${CMAKE_Fortran_COMPILER} NAME )

set     ( myProject "TeamCity Plumbing Demonstration" )
project ( ${myProject} )

# directory structure
# .                                    PROJECT_DIRECTORY
# |- /bin                              PROJECT_BINARY_DIR
#     |- /src

set ( PROJECT_DIRECTORY  $ENV{DEMO_HOME}mwe/ )  # DEMO_HOME set in .bashrc
set ( PROJECT_SOURCE_DIR ${PROJECT_DIRECTORY}src )
set ( PROJECT_BINARY_DIR ${PROJECT_DIRECTORY}bin ) # not used

message ( "" )
message ( "myProject          =  ${myProject}" )
message ( "DEMO_HOME          =  $ENV{DEMO_HOME}" )
message ( "PROJECT_DIRECTORY  =  ${PROJECT_DIRECTORY}" )
message ( "PROJECT_SOURCE_DIR =  ${PROJECT_SOURCE_DIR}" )
message ( "PROJECT_BINARY_DIR =  ${PROJECT_BINARY_DIR}" ) # not used
message ( "CMake version      =  ${CMAKE_VERSION}" )
message ( "" )

message ( "Fortran_COMPILER_NAME  =  ${CMAKE_Fortran_COMPILER}" )

if ( Fortran_COMPILER_NAME MATCHES "gfortran.*" )
  # gfortran
  message ( "using GNU Fortran compiler" )
  set ( CMAKE_Fortran_FLAGS_RELEASE "-funroll-all-loops -fno-f2c -O3" )
  set ( CMAKE_Fortran_FLAGS_DEBUG   $ENV{gflags} )

elseif (Fortran_COMPILER_NAME MATCHES "ifort.*" )
  # ifort (untested)
  message ( "using intel Fortran compiler" )
  set ( CMAKE_Fortran_FLAGS_RELEASE "-f77rtl -O3" )
  set ( CMAKE_Fortran_FLAGS_DEBUG   "-f77rtl -O0 -g" )

elseif ( Fortran_COMPILER_NAME MATCHES "g77" )
  # g77
  message ( "using Fortran 77 compiler" )
  set ( CMAKE_Fortran_FLAGS_RELEASE "-funroll-all-loops -fno-f2c -O3 -m32" )
  set ( CMAKE_Fortran_FLAGS_DEBUG   "-fno-f2c -O0 -g -m32" )

else ( Fortran_COMPILER_NAME MATCHES "gfortran.*" )
  message ( "CMAKE_Fortran_COMPILER full path: " ${CMAKE_Fortran_COMPILER} )
  message ( "Fortran compiler: " ${Fortran_COMPILER_NAME} )
  message ( "No optimized Fortran compiler flags are known, we just try -O2..." )
  set ( CMAKE_Fortran_FLAGS_RELEASE "-O2" )
  set ( CMAKE_Fortran_FLAGS_DEBUG   "-O0 -g" )
endif ( Fortran_COMPILER_NAME MATCHES "gfortran.*" )

# # enable dashboard scripting
# include ( CTest )  CMake v 2.8.4 minimum

# jump to source directory
add_subdirectory ( ${PROJECT_SOURCE_DIR} )
