## Problem: Two Sum (Easy)

**LeetCode:** https://leetcode.com/problems/two-sum/

### Approach

Use two nested loops to check every pair of numbers in the array. If the sum of a pair equals the target, print their indices.

### Complexity

- Time: O(n²)
- Space: O(1)

### Notes

Tested locally with:
1. `[2, 7, 11, 15]`, target `9` → `[0, 1]`
2. `[3, 3]`, target `6` → `[0, 1]`