# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "android-build"
  "src\\CMakeFiles\\kirigamiplugin_autogen.dir\\AutogenUsed.txt"
  "src\\CMakeFiles\\kirigamiplugin_autogen.dir\\ParseCache.txt"
  "src\\kirigamiplugin_autogen"
  "src\\libkirigami\\CMakeFiles\\KF5Kirigami2_autogen.dir\\AutogenUsed.txt"
  "src\\libkirigami\\CMakeFiles\\KF5Kirigami2_autogen.dir\\ParseCache.txt"
  "src\\libkirigami\\KF5Kirigami2_autogen"
  )
endif()
