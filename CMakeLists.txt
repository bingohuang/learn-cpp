cmake_minimum_required(VERSION 3.15)
project(learn-cpp)

set(CMAKE_CXX_STANDARD 14)

# basic
add_executable(learn-cpp main.cpp)
#add_executable(learn-cpp basic/hello_world.cpp)
#add_executable(learn-cpp basic/sizeof.cpp)
#add_executable(learn-cpp basic/define.cpp)
#add_executable(learn-cpp basic/const.cpp)
#add_executable(learn-cpp basic/unsigned.cpp)
#add_executable(learn-cpp basic/static.cpp)
#add_executable(learn-cpp basic/extern_local.cpp)
#add_executable(learn-cpp basic/extern_file.cpp basic/extern_support.cpp)
#add_executable(learn-cpp basic/for.cpp)
#add_executable(learn-cpp basic/vector.cpp)

#add_subdirectory(./include/googletest)
#
## 将用于google test的头文件gtest.h添加到include路径中
#include_directories(./include/googletest/googletest/include)
#include_directories(./include/googletest/googlemock/include)
## 将libtest.a添加到链接路径中（同时需要添加googletest运行需要的pthread）
#link_directories(./include/googletest)
#
#set(LIBRARIES
#        gtest
#        gmock
#        pthread)

# gtest
#add_executable(learn-cpp test.cpp)
#add_executable(learn-cpp basic/_test.cpp)
#add_executable(learn-cpp gtest/vector_test.cpp)
#
# gmock
#add_executable(learn-cpp gmock/demo1/FooInterface.h gmock/demo1/MockFoo.cpp)
#add_executable(learn-cpp gmock/demo2/FooInterface.h gmock/demo2/FooMock.h gmock/demo2/FooMain.cpp gmock/demo2/FooTest.cpp)
#
## 以下注释要打开
#target_link_libraries(learn-cpp ${LIBRARIES})