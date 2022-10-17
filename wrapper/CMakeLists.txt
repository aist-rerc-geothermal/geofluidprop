
IF(POLICY CMP0078)
    cmake_policy(SET CMP0078 NEW)
ENDIF()
IF(POLICY CMP0086)
    cmake_policy(SET CMP0086 NEW)
ENDIF()

if (BUILD_R_LIB)
  find_package(SWIG REQUIRED)
  find_package(R REQUIRED)
  include(${SWIG_USE_FILE})
  include_directories(${R_INCLUDE_DIR})
  set(INTERFACE_FILES swig/geofluidprop.i)
  include_directories("${PROJECT_SOURCE_DIR}/src")
  set(CMAKE_SWIG_OUTDIR "${PROJECT_BINARY_DIR}/lib/r")
  swig_add_library(geofluidprop_r  TYPE SHARED LANGUAGE R
  #    OUTPUT_DIR "${PROJECT_BINARY_DIR}/lib"
  #    OUTFILE_DIR "${PROJECT_BINARY_DIR}/lib"
      SOURCES ${INTERFACE_FILES} ${SOURCES}
  )
  set_target_properties(geofluidprop_r PROPERTIES LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib/r")
  set_target_properties(geofluidprop_r PROPERTIES OUTPUT_NAME "geofluidprop")
  #set_property(TARGET geofluidprop_r PROPERTY SWIG_USE_LIBRARY_INCLUDE_DIRECTORIES TRUE)
  swig_link_libraries(geofluidprop_r ${EOSLIBNAME})
endif()

if (BUILD_PYTHON_LIB)
  find_package(SWIG REQUIRED)
  find_package(PythonLibs REQUIRED)
  include(${SWIG_USE_FILE})
  include_directories(${PYTHON_INCLUDE_PATH})
  set(INTERFACE_FILES swig/geofluidprop.i)
  set(CMAKE_SWIG_OUTDIR "${PROJECT_BINARY_DIR}/lib/python")
  swig_add_library(geofluidprop_py TYPE SHARED LANGUAGE python
      OUTPUT_DIR "${PROJECT_BINARY_DIR}/lib/python"
      OUTFILE_DIR "${PROJECT_BINARY_DIR}/lib/python"
      SOURCES ${INTERFACE_FILES} ${SOURCES}
  )
  set_target_properties(geofluidprop_py PROPERTIES LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib/python")
  swig_link_libraries(geofluidprop_py ${EOSLIBNAME} ${PYTHON_LIBRARIES})
endif()

