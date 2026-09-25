## Problem: Move Zeroes (Easy)

**LeetCode:** https://leetcode.com/problems/move-zeroes/

### Approach

Keep a position for the next non-zero element. Move all non-zero elements to the front while maintaining their order, then place zeroes in the remaining positions.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

Tested locally with:
1. `[0,1,0,3,12]` → `[1,3,12,0,0]`
2. `[0]` → `[0]`