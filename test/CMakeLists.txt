

find_package(Threads REQUIRED)

####################
### Actual Tests ###
####################

# an executable for the sample test
add_executable(Sample_test main.cpp sampleTest.cpp)
target_include_directories(Sample_test PRIVATE ../include)
#message(${CMAKE_SOURCE_DIR})

#add_library(libgtest IMPORTED STATIC GLOBAL)
#add_dependencies(libgtest gtest)

target_link_libraries(Sample_test PRIVATE ${CMAKE_SOURCE_DIR}/lib/libgtest.a ${CMAKE_THREAD_LIBS_INIT})

add_test(NAME Sample_test
         COMMAND Sample_test)

# an executable for testing the Addition class
#add_executable(runAddition_test main.cpp AdditionTest.cpp)

#target_link_libraries(runAddition_test
#    libgtest
#    googletest-cmake-example_lib
#)

#add_test(NAME runAddition_test
#         COMMAND runAddition_test)
