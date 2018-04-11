##############################################################################
# Libraries
##############################################################################

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
add_library(third_party STATIC third_party.cpp)

##############################################################################
# Installs
##############################################################################

install(
  TARGETS
    third_party
  RUNTIME DESTINATION bin
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
)
