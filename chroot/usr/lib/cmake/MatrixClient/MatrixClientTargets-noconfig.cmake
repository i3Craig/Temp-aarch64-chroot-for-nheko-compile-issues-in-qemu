#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "MatrixClient::MatrixClient" for configuration ""
set_property(TARGET MatrixClient::MatrixClient APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(MatrixClient::MatrixClient PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmatrix_client.so.0.8.2"
  IMPORTED_SONAME_NOCONFIG "libmatrix_client.so.0.8.2"
  )

list(APPEND _cmake_import_check_targets MatrixClient::MatrixClient )
list(APPEND _cmake_import_check_files_for_MatrixClient::MatrixClient "${_IMPORT_PREFIX}/lib/libmatrix_client.so.0.8.2" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
