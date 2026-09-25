## Problem: Reverse String (Easy)

**LeetCode:** https://leetcode.com/problems/reverse-string/

### Approach

Use two pointers, one starting from the beginning and one from the end. Swap the characters at these positions and move the pointers toward the center.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

Tested locally with:
1. `["h","e","l","l","o"]` → `["o","l","l","e","h"]`
2. `["H","a","n","n","a","h"]` → `["h","a","n","n","a","H"]`