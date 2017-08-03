cmake_minimum_required(VERSION 3.8)
project(winterbot)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(lib/winterwind)

set(SOURCE_FILES
        src/main.cpp
        )

include_directories(lib/winterwind/include)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin/)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME}
        winterwind
        winterwind_extras
        yaml-cpp)


