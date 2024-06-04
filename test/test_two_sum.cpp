/**
 * @Author: fengfuyuyang@outlook.com
 * @File Name: test_tow_sum.cpp
 * @File Version: 0.1
 * @Create Time: 2024-05-28 20:03:48
 * 
 * Copyright (c) 2024 fengfuyuyang@outlook.com. All rights reserved.
 */

#include "solution.h"
#include <gtest/gtest.h>

TEST(SolutionTest, twoSumTest) {
    Solution solution;

    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> expected = {0, 1};
    std::vector<int> result = solution.twoSum(nums, target);
    EXPECT_EQ(expected, result);

    nums = {3, 2, 4};
    target = 6;
    expected = {1, 2};
    result = solution.twoSum(nums, target);
    EXPECT_EQ(expected, result);

    nums = {3, 3};
    target = 6;
    expected = {0, 1};
    result = solution.twoSum(nums, target);
    EXPECT_EQ(expected, result);
}
