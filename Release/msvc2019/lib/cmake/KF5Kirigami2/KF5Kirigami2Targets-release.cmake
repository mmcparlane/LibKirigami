#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "KF5::Kirigami2" for configuration "Release"
set_property(TARGET KF5::Kirigami2 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(KF5::Kirigami2 PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/KF5Kirigami2.lib"
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "Qt5::Qml;Qt5::Quick;Qt5::QuickControls2"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/KF5Kirigami2.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS KF5::Kirigami2 )
list(APPEND _IMPORT_CHECK_FILES_FOR_KF5::Kirigami2 "${_IMPORT_PREFIX}/lib/KF5Kirigami2.lib" "${_IMPORT_PREFIX}/bin/KF5Kirigami2.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
