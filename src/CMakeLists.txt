set(raytracer_SOURCES main.cpp image.cpp color.cpp)
include_directories(${CMAKE_SOURCE_DIR}/include)
add_executable(raytracer ${raytracer_SOURCES})
