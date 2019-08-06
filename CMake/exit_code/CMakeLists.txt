#-----------------------------*-cmake-*----------------------------------------#
# file   ${TEAMCITY_HOME}/CMakeLists.txt
# author Daniel Topa <dantopa@lanl.gov>  505 667 0817
# date   2017 Aug 8
# brief  Minimum Working Example for TeamCity build agent
# note   Copyright (C) 2017, Los Alamos National Security, LLC.
#        All rights reserved.
#------------------------------------------------------------------------------#
# $Id$
#------------------------------------------------------------------------------#

# at the command line:
# 1. navigate to directory with ${DEMO}/exit_code
# 2. mkdir build && cd build
# 4. cmake ..
# 5. make
# 6. cd src
# 7. ./exit_code

cmake_minimum_required ( VERSION 3.6.2 )
enable_language ( Fortran )
get_filename_component ( Fortran_COMPILER_NAME ${CMAKE_Fortran_COMPILER} NAME )

# set     ( myProject "TeamCity Fortran Exit Code Demonstration" )
project ( EXIT_CODE VERSION 2.0 Fortran)

# directory structure
# .                                    PROJECT_DIRECTORY
# |- /src
# |- /bin                              PROJECT_BINARY_DIR (not used)
#    |- /src
# |= /build                            Created by CMake
#    |= src

set ( dir_my_project "$ENV{gitlab}/CMake/exit_code/" ) # gitlab variable set in .bashrc

set ( PROJECT_DIRECTORY  ${dir_my_project} )
set ( PROJECT_SOURCE_DIR ${PROJECT_DIRECTORY}src )
set ( PROJECT_BINARY_DIR ${PROJECT_DIRECTORY}bin ) # not used

message ( "" )
message ( "myProject          =  EXIT_CODE" )
message ( "DEMO_HOME          =  $ENV{DEMO_HOME}" )
message ( "PROJECT_DIRECTORY  =  ${PROJECT_DIRECTORY}" )
message ( "PROJECT_SOURCE_DIR =  ${PROJECT_SOURCE_DIR}" )
message ( "PROJECT_BINARY_DIR =  ${PROJECT_BINARY_DIR}" ) # not used
message ( "CMake version      =  ${CMAKE_VERSION}" )
message ( "" )

message ( "CMAKE_Fortran_COMPILER = " ${CMAKE_Fortran_COMPILER} )
message ( "Fortran compiler name  = " ${Fortran_COMPILER_NAME} )
message ( "" )

set ( CMAKE_Fortran_FLAGS_GNU_FullSet " -g -ffpe-trap=denormal,invalid,zero -fbacktrace -Wall -Wextra -Waliasing -Wsurprising -Wimplicit-procedure -Wintrinsics-std -Og -pedantic -fmax-errors=5 -fcheck=all -fcheck=do -fcheck=pointer -fno-protect-parens -Wfunction-elimination -faggressive-function-elimination -Wc-binding-type -Wrealloc-lhs-all -Wuse-without-only -fdiagnostics-color=auto -Wconversion-extra " )

string( CONCAT myFlags $ENV{gflags} "-cpp" )

if ( Fortran_COMPILER_NAME MATCHES "gfortran.*" )
  # gfortran
  message ( "using GNU Fortran compiler" )
  set ( CMAKE_Fortran_FLAGS_RELEASE "-g -Wall -cpp" )
  set ( CMAKE_Fortran_FLAGS_DEBUG   myFlags )

elseif (Fortran_COMPILER_NAME MATCHES "ifort.*" )
  # ifort (untested)
  message ( "using intel Fortran compiler" )
  set ( CMAKE_Fortran_FLAGS_RELEASE "-f77rtl -O3" )
  set ( CMAKE_Fortran_FLAGS_DEBUG   "-f77rtl -O0 -g" )

elseif ( Fortran_COMPILER_NAME MATCHES "g77.*" )
  # g77
  message ( "using Fortran 77 compiler" )
  set ( CMAKE_Fortran_FLAGS_RELEASE "-funroll-all-loops -fno-f2c -O3 -m32" )
  set ( CMAKE_Fortran_FLAGS_DEBUG   "-fno-f2c -O0 -g -m32" )

elseif ( Fortran_COMPILER_NAME MATCHES "f95.*" )
  # g95
  message ( "using Fortran 95 compiler" )
  set ( CMAKE_Fortran_FLAGS_RELEASE "-g -Wall -cpp" )
  set ( CMAKE_Fortran_FLAGS_DEBUG   myFlags )

else ( Fortran_COMPILER_NAME MATCHES "gfortran.*" )
  message ( "Unanticipated Fortran compiler used: trying optimization -O2..." )
  set ( CMAKE_Fortran_FLAGS_RELEASE "-O2" )
  set ( CMAKE_Fortran_FLAGS_DEBUG   "-O0 -g" )
endif ( Fortran_COMPILER_NAME MATCHES "gfortran.*" )

message ( "" )

add_executable ( EXIT_CODE ../src/exit_code )

# # enable dashboard scripting
include ( CTest )  # CMake v 2.8.4 minimum

# jump to source directory
# add_subdirectory ( ${PROJECT_SOURCE_DIR} )
