cmake_minimum_required(VERSION 3.10)
project(DailyCppProblems)

set(CMAKE_CXX_STANDARD 14)

# 包含CTest模块以启用测试功能
include(CTest)

# 添加包含目录
include_directories(${PROJECT_SOURCE_DIR}/include)

# 添加子目录
add_subdirectory(src)
add_subdirectory(test)
