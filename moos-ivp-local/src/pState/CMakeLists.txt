#--------------------------------------------------------
# The CMakeLists.txt for:                          pState
# Author(s):                                Nick Nidizeko
#--------------------------------------------------------

FILE(GLOB SRC *.cpp)

ADD_EXECUTABLE(pState ${SRC})
   
TARGET_LINK_LIBRARIES(pState
  ${MOOSGeodesy_LIBRARIES}
  ${MOOS_LIBRARIES}
  m
  pthread)
