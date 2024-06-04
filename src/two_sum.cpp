/**
 * @Author: fengfuyuyang@outlook.com
 * @File Name: tow_sum.cpp
 * @File Version: 0.1
 * @Create Time: 2024-05-28 20:02:24
 * 
 * Copyright (c) 2024 fengfuyuyang@outlook.com. All rights reserved.
 */

// #include <vector>

// 给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。
// 你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。
// 你可以按任意顺序返回答案。


// 示例 1：
// 输入：nums = [2,7,11,15], target = 9
// 输出：[0,1]
// 解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1] 。

// 示例 2：
// 输入：nums = [3,2,4], target = 6
// 输出：[1,2]

// 示例 3：
// 输入：nums = [3,3], target = 6
// 输出：[0,1]

// 提示：

// 2 <= nums.length <= 104
// -109 <= nums[i] <= 109
// -109 <= target <= 109
// 只会存在一个有效答案

// 思路：
// 这道题的思路是使用哈希表来解决。
// 首先，我们遍历数组 nums，对于每一个元素 nums[i]，我们计算它的目标值 target - nums[i]，如果哈希表中存在这个目标值，则说明找到了两个元素的和等于 target，我们将这两个元素的下标放入答案中，并返回。
// 如果哈希表中不存在这个目标值，则说明这个元素还没有出现过，我们将其存入哈希表中。
// 时间复杂度：O(n)，其中 n 是数组 nums 的长度。
// 空间复杂度：O(n)，其中 n 是数组 nums 的长度。

#include "solution.h"

#include <unordered_map>

using std::vector;
using std::unordered_map;

vector<int> Solution::twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> num_map;
    std::vector<int> result;

    for (size_t i = 0; i != nums.size(); ++i) {
        int tmp = target - nums[i];

        if (num_map.find(tmp) != num_map.end()) {
            result.push_back(num_map[tmp]);
            result.push_back(i);
            break;
        }
        num_map[nums[i]] = i;
    }
    return result;
}
