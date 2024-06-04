/**
 * @Author: fengfuyuyang@outlook.com
 * @File Name: add_two_numbers.cpp
 * @File Version: 0.1
 * @Create Time: 2024-05-29 21:02:17
 * 
 * Copyright (c) 2024 fengfuyuyang@outlook.com. All rights reserved.
 */

// 给你两个 非空 的链表，表示两个非负的整数。它们每位数字都是按照 逆序 的方式存储的，并且每个节点只能存储 一位 数字。
// 请你将两个数相加，并以相同形式返回一个表示和的链表。
// 你可以假设除了数字 0 之外，这两个数都不会以 0 开头。

// 示例 1：
// 输入：l1 = [2,4,3], l2 = [5,6,4]
// 输出：[7,0,8]
// 解释：342 + 465 = 807.

// 示例 2：
// 输入：l1 = [0], l2 = [0]
// 输出：[0]

// 示例 3：
// 输入：l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
// 输出：[8,9,9,9,0,0,0,1]

// 提示：
// 每个链表中的节点数在范围 [1, 100] 内
// 0 <= Node.val <= 9
// 题目数据保证列表表示的数字不含前导零

// 思路：
// 链表的相加，可以从低位到高位依次相加，如果有进位，则将进位值加到下一位。
// 我们可以用一个 dummy 节点来作为头节点，然后将两个链表依次遍历，将相加的结果添加到 dummy 节点的下一个节点中。
// 最后返回 dummy 节点的下一个节点，即为相加后的链表。

#include "solution.h"

using ListNode = Solution::ListNode;

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* dummy = new ListNode(0);
    ListNode* curr = dummy;
    int carry = 0;

    while (l1 || l2 || carry) {
        int val1 = (l1? l1->val : 0);
        int val2 = (l2? l2->val : 0);
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        curr->next = new ListNode(sum % 10);
        curr = curr->next;
        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }
    return dummy->next;
}