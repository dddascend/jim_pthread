#cmake最小需要版本
cmake_minimum_required(VERSION 2.8)
     
#项目名字
project(HELLOWORLD)

SET(CMAKE_BUILD_TYPE Release)

add_compile_options(-std=c99)     
#包含原程序,即把给定目录下的源程序复制给变量DIR_SRC
#aux_source_directory(test_thread.c DIR_SRC)
find_package(Threads)

#生成程序
add_executable(jimthread test_thread.c)

target_link_libraries(jimthread ${CMAKE_THREAD_LIBS_INIT})
