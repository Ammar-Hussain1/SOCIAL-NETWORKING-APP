# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\SOCIAL-NETWORKING-APP_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\SOCIAL-NETWORKING-APP_autogen.dir\\ParseCache.txt"
  "SOCIAL-NETWORKING-APP_autogen"
  )
endif()
