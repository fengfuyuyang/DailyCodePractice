/**
 * @Author: fengfuyuyang@outlook.com
 * @File Name: length_of_longest_substring.cpp
 * @File Version: 0.1
 * @Create Time: 2024-06-04 19:01:39
 * 
 * Copyright (c) 2024 fengfuyuyang@outlook.com. All rights reserved.
 */

// 给定一个字符串 s，找到 s 中最长的无重复字符子串的长度。
// 示例 1:

// 输入: s = "abcabcbb"
// 输出: 3
// 解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。
// 示例 2:

// 输入: s = "bbbbb"
// 输出: 1
// 解释: 因为无重复字符的最长子串是 "b"，所以其长度为 1。
// 示例 3:

// 输入: s = "pwwkew"
// 输出: 3
// 解释: 因为无重复字符的最长子串是 "wke"，所以其长度为 3。
//      请注意，你的答案必须是 子串 的长度，"pwke" 是一个子序列，不是子串。

// 提示：

// 0 <= s.length <= 5 * 104
// s 由英文字母、数字、符号和空格组成

// 思路：
// 这道题的思路是滑动窗口，用一个哈希表来记录当前窗口中的字符是否出现过，如果出现过，则移动左指针，直到窗口中没有重复的字符，记录当前窗口的长度，然后移动右指针，继续判断是否重复。
// 时间复杂度：O(n)，n 是字符串 s 的长度。
// 空间复杂度：O(min(m, n))，m 是字符集的大小，这里是 256，所以空间复杂度是 O(1)。

#include <solution.h>
#include <unordered_set>

using std::string;
using std::unordered_set;

int Solution::lengthOfLongestSubstring(string s) {
    unordered_set<char> chars;

    int l = 0;
    int r = 0;
    int max_len = 0;

    while (r < s.size()) {
        if (chars.find(s[r]) == chars.end()) {
            chars.insert(s[r]);
            max_len = std::max(max_len, r - l + 1);
            ++r;
        } else {
            chars.erase(s[l]);
            ++l;
        }
    }
    return max_len;
}
