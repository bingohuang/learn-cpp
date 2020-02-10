cmake_minimum_required(VERSION 3.15)
project(learn_cpp)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(./googletest)
set(LIBRARIES
        gtest
        pthread)

# test
add_executable(learn_cpp test.cpp)


target_link_libraries(learn_cpp ${LIBRARIES})

# main
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
