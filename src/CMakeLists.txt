# Note that headers are optional, and do not affect add_library, but they will not
# show up in IDEs unless they are listed in add_library.

# Optionally glob, but only for CMake 3.12 or later:
file(GLOB HEADER_LIST CONFIGURE_DEPENDS "${projC_SOURCE_DIR}/include/projC/*.h")

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
find_package(Qt5 COMPONENTS Core REQUIRED)

# Make an automatic library - will be static or dynamic based on user setting
add_library(projC SHARED
  projc.cpp
  ${HEADER_LIST}
)

# We need this directory, and users of our library will need it too
target_include_directories(projC PUBLIC ../include)

# This depends on (header only) boost
# Adding the libname makes the headers of subProj available to the source files of the proj
target_link_libraries(projC PRIVATE Qt5::Core projD)

target_compile_definitions(projC PRIVATE PROJD_LIBRARY)
