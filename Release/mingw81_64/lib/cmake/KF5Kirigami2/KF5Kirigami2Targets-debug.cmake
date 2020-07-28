#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "KF5::Kirigami2" for configuration "Debug"
set_property(TARGET KF5::Kirigami2 APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(KF5::Kirigami2 PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/libKF5Kirigami2.dll.a"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_DEBUG "Qt5::Qml;Qt5::Quick;Qt5::QuickControls2"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/libKF5Kirigami2.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS KF5::Kirigami2 )
list(APPEND _IMPORT_CHECK_FILES_FOR_KF5::Kirigami2 "${_IMPORT_PREFIX}/lib/libKF5Kirigami2.dll.a" "${_IMPORT_PREFIX}/bin/libKF5Kirigami2.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
