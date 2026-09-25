## Problem: Valid Anagram (Easy)

**LeetCode:** https://leetcode.com/problems/valid-anagram/

### Approach

Count how many times each character appears in both strings. If the character counts are the same, the two strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

Tested locally with:
1. `"anagram"`, `"nagaram"` → `true`
2. `"rat"`, `"car"` → `false`