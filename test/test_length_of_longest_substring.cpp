/**
 * @Author: fengfuyuyang@outlook.com
 * @File Name: test_length_of_longest_substring.cpp
 * @File Version: 0.1
 * @Create Time: 2024-06-04 19:32:38
 * 
 * Copyright (c) 2024 fengfuyuyang@outlook.com. All rights reserved.
 */


#include "solution.h"
#include <gtest/gtest.h>

TEST(SolutionTest, lengthOfLongestSubstringTest) {
    Solution solution;
    std::string s1 = "abcabcbb";
    EXPECT_EQ(3, solution.lengthOfLongestSubstring(s1));
    std::string s2 = "bbbbb";
    EXPECT_EQ(1, solution.lengthOfLongestSubstring(s2));
    std::string s3 = "pwwkew";
    EXPECT_EQ(3, solution.lengthOfLongestSubstring(s3));

    std::string s4 = " ";
    EXPECT_EQ(1, solution.lengthOfLongestSubstring(s4));

}
