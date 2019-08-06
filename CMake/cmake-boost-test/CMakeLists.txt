cmake_minimum_required(VERSION 2.6)
project(my-boost-test)

enable_testing()

# make CMake put all executable files to the top level directory of your build
# tree
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

add_subdirectory(header-only)

add_subdirectory(static-library)
add_subdirectory(static-library-find-package)

add_subdirectory(dynamic-library)
add_subdirectory(dynamic-library-find-package)

set(DEXY_SOURCES_DIR ${CMAKE_HOME_DIRECTORY}/docs/dexy)
set(DEXY_SOURCES running-tests.rst)
set(DEXY_OUTPUT_DIR ${DEXY_SOURCES_DIR}/output)

set(SPHINX_SOURCES_DIR ${CMAKE_HOME_DIRECTORY}/docs)

set(DEXY_OUTPUTS)
set(SPHINX_SOURCES)
foreach(_file ${DEXY_SOURCES})
  list(APPEND DEXY_OUTPUTS ${DEXY_OUTPUT_DIR}/${_file})
  list(APPEND SPHINX_SOURCES ${SPHINX_SOURCES_DIR}/${_file})
endforeach()

add_custom_target(dexy DEPENDS dexy-clean ${SPHINX_SOURCES})

add_custom_target(dexy-clean
  COMMENT "Erase living documentation" VERBATIM
  COMMAND rm -f ${DEXY_OUTPUTS} ${SPHINX_SOURCES})

add_custom_command(
  COMMENT "Generate living documentation with Dexy" VERBATIM
  OUTPUT ${DEXY_OUTPUTS}
  WORKING_DIRECTORY ${DEXY_SOURCES_DIR}
  COMMAND dexy)

add_custom_command(
  COMMENT "Copy living documentation to Sphinx source directory" VERBATIM
  OUTPUT ${SPHINX_SOURCES} DEPENDS ${DEXY_OUTPUTS}
  WORKING_DIRECTORY ${DEXY_OUTPUT_DIR}
  COMMAND cp ${DEXY_OUTPUTS} ${SPHINX_SOURCES_DIR})