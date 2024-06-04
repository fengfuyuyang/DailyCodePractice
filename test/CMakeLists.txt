enable_testing()

# 添加 Google Test 子模块，并指定二进制目录
add_subdirectory(${PROJECT_SOURCE_DIR}/external/googletest ${PROJECT_BINARY_DIR}/googletest-build)

file(GLOB TEST_FILES test_*.cpp)
foreach(test_file ${TEST_FILES})
    get_filename_component(test_name ${test_file} NAME_WE)
    add_executable(${test_name} ${test_file})
    target_link_libraries(${test_name} gtest gtest_main solutions)
    add_test(NAME ${test_name} COMMAND ${test_name})
endforeach()
