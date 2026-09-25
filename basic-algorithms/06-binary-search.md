## Problem: Binary Search (Easy)

**LeetCode:** https://leetcode.com/problems/binary-search/

### Approach

Use two pointers to represent the search range. Check the middle element and eliminate half of the search range depending on whether the target is smaller or larger.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

Tested locally with:
1. `nums = [-1,0,3,5,9,12]`, target `9` → `4`
2. `nums = [-1,0,3,5,9,12]`, target `2` → `-1`