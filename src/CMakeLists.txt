set(raycaster_SOURCES main.cpp image.cpp)
include_directories(${CMAKE_SOURCE_DIR}/include)
add_executable(raycaster ${raycaster_SOURCES})
