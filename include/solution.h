/**
 * @Author: fengfuyuyang@outlook.com
 * @File Name: solution.h
 * @File Version: 0.1
 * @Create Time: 2024-05-28 20:02:00
 * 
 * Copyright (c) 2024 fengfuyuyang@outlook.com. All rights reserved.
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    // 两数之和
    std::vector<int> twoSum(std::vector<int>& nums, int target);

    // 两数相加
    struct ListNode {
       int val;
       ListNode *next;
       ListNode() : val(0), next(nullptr) {}
       ListNode(int x) : val(x), next(nullptr) {}
       ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);

    // 无重复字符的最长子串
    int lengthOfLongestSubstring(std::string s);
};

#endif // SOLUTION_H

