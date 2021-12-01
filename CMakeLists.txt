cmake_minimum_required(VERSION 3.4...3.18)
project(example LANGUAGES CXX)

#add_subdirectory(pybind11)
find_package(pybind11 REQUIRED)
pybind11_add_module(app src/app.cpp)

target_link_libraries(app PUBLIC)
install(TARGETS app
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib/static)