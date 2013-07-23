set(raytracer_SOURCES main.cpp color.cpp image.cpp ray.cpp
    sphere.cpp scene.cpp)
include_directories(${CMAKE_SOURCE_DIR}/include)
add_executable(raytracer ${raytracer_SOURCES})
