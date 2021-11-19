cmake_minimum_required(VERSION 3.4...3.18)
project(example LANGUAGES CXX)

#add_subdirectory(pybind11)
find_package(pybind11 REQUIRED)
pybind11_add_module(main src/main.cpp)

target_link_libraries(main PUBLIC)
install(TARGETS main
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib/static)
