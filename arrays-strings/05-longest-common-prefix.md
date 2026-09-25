## Problem: Longest Common Prefix (Easy)

**LeetCode:** https://leetcode.com/problems/longest-common-prefix/

### Approach

Compare the characters of the first string with the corresponding characters in the other strings. Stop when a character differs or when the end of a string is reached.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

Tested locally with:
1. `["flower","flow","flight"]` → `"fl"`
2. `["dog","racecar","car"]` → `""`