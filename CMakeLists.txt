cmake_minimum_required(VERSION 3.15)
project(learn-cpp)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(./googletest)

# 将用于google test的头文件gtest.h添加到include路径中
include_directories(./googletest/googletest/include)
include_directories(./googletest/googlemock/include)
# 将libtest.a添加到链接路径中（同时需要添加googletest运行需要的pthread）
link_directories(./googletest)

set(LIBRARIES
        gtest
        gmock
        pthread)

# gtest
#add_executable(learn_cpp test.cpp)
#add_executable(learn_cpp basic/_test.cpp)
#add_executable(learn-cpp basic/vector_test.cpp)

# gmock
add_executable(learn-cpp gmock/FooInterface.h gmock/FooMock.h gmock/FooMain.cpp)
#add_executable(learn-cpp gmock/FooInterface.h gmock/MockFoo.cpp)

target_link_libraries(learn-cpp ${LIBRARIES})

#add_test(Test learn_cpp)
#enable_testing()

# basic
#add_executable(learn-cpp main.cpp)
#add_executable(learn-cpp imooc/vector/main.cpp)
#add_executable(learn-cpp jike/incdec/main.cpp)
#add_executable(learn-cpp basic/hello_world.cpp)
#add_executable(learn-cpp basic/sizeof.cpp)
#add_executable(learn-cpp basic/define.cpp)
#add_executable(learn-cpp basic/const.cpp)
#add_executable(learn-cpp basic/unsigned.cpp)
#add_executable(learn-cpp basic/static.cpp)
#add_executable(learn-cpp basic/extern_local.cpp)
#add_executable(learn-cpp basic/extern_file.cpp basic/extern_support.cpp)
#add_executable(learn-cpp basic/for.cpp)