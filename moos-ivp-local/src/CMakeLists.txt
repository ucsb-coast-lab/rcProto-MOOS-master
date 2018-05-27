##############################################################################
# FILE:        moos-ivp-remus/src/CMakeLists.txt
# DATE:        2011/Oct/13
# DESCRIPTION: CMakeLists.txt file for the moos-ivp-remus source directory
##############################################################################

#============================================================================
# Add the libraries in the current directory to the include path
#============================================================================
FILE(GLOB LOCAL_LIBRARY_DIRS ./lib_*)
INCLUDE_DIRECTORIES(${LOCAL_LIBRARY_DIRS})

find_package(MOOSGeodesy)
include_directories(${MOOSGeodesy_INCLUDE_DIRS} )
link_directories(${MOOSGeodesy_LIBRARY_PATH})
#============================================================================
# List the subdirectories to build...
#============================================================================
#ADD_SUBDIRECTORY(lib_anrp_util)
#ADD_SUBDIRECTORY(iMOOS2Serial)
ADD_SUBDIRECTORY(pOdometry)
#ADD_SUBDIRECTORY(iGPSd)
#ADD_SUBDIRECTORY(pState)

##############################################################################
#                           END of CMakeLists.txt
##############################################################################
