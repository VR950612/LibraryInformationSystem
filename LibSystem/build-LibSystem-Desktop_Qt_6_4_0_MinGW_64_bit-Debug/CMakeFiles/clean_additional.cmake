# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\LibSystem_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\LibSystem_autogen.dir\\ParseCache.txt"
  "LibSystem_autogen"
  )
endif()
