/**
 * @Author: fengfuyuyang@outlook.com
 * @File Name: test_add_two_numbers.cpp
 * @File Version: 0.1
 * @Create Time: 2024-06-04 18:38:23
 * 
 * Copyright (c) 2024 fengfuyuyang@outlook.com. All rights reserved.
 */

#include "solution.h"
#include <gtest/gtest.h>

TEST(SolutionTest, addTwoNumbersTest) {
    Solution solution;
    using ListNode = Solution::ListNode;
    ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
    ListNode* l2 = new ListNode(5, new ListNode(6, new ListNode(4)));
    ListNode* result = solution.addTwoNumbers(l1, l2);
    EXPECT_EQ(7, result->val);
    EXPECT_EQ(0, result->next->val);
    EXPECT_EQ(8, result->next->next->val);

    delete l1;
    delete l2;
    delete result;

    l1 = new ListNode(0);
    l2 = new ListNode(0);
    result = solution.addTwoNumbers(l1, l2);
    EXPECT_EQ(0, result->val);
    delete l1;
    delete l2;
    delete result;

    l1 = new ListNode(9, new ListNode(9, new ListNode(9)));
    l2 = new ListNode(9, new ListNode(9));
    result = solution.addTwoNumbers(l1, l2);
    EXPECT_EQ(8, result->val);
    EXPECT_EQ(9, result->next->val);
    EXPECT_EQ(0, result->next->next->val);
    delete l1;
    delete l2;
    delete result;
}
