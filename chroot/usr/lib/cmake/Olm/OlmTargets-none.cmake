#----------------------------------------------------------------
# Generated CMake target import file for configuration "None".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Olm::Olm" for configuration "None"
set_property(TARGET Olm::Olm APPEND PROPERTY IMPORTED_CONFIGURATIONS NONE)
set_target_properties(Olm::Olm PROPERTIES
  IMPORTED_LOCATION_NONE "${_IMPORT_PREFIX}/lib/libolm.so.3.2.12"
  IMPORTED_SONAME_NONE "libolm.so.3"
  )

list(APPEND _IMPORT_CHECK_TARGETS Olm::Olm )
list(APPEND _IMPORT_CHECK_FILES_FOR_Olm::Olm "${_IMPORT_PREFIX}/lib/libolm.so.3.2.12" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
