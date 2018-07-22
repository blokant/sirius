cmake_minimum_required(VERSION 3.2)
set(sirius_include_dir ../include)
set(sources main.cpp
            math/summator.cpp)

enable_testing()

add_executable(${PROJECT_NAME} ${sources})
#message(${PROJECT_NAME})
target_include_directories(${PROJECT_NAME} PRIVATE ${sirius_include_dir})

add_subdirectory(math)
