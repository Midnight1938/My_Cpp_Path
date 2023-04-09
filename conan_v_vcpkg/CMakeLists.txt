cmake_minimum_required(VERSION 3.16)
project(PackageTest)

find_package(fmt REQUIRED)

add_executable(conan_v_vcpkg main.cpp)

target_link_libraries(conan_v_vcpkg PRIVATE fmt::fmt)
