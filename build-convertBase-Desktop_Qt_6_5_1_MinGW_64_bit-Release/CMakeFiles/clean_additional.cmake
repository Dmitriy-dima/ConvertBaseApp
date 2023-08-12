# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\convertBase_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\convertBase_autogen.dir\\ParseCache.txt"
  "convertBase_autogen"
  )
endif()
