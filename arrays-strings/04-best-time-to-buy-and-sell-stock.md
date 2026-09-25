## Problem: Best Time to Buy and Sell Stock (Easy)

**LeetCode:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

Keep track of the lowest price seen so far and calculate the profit by selling at the current price. Update the maximum profit whenever a higher profit is found.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

Tested locally with:
1. `[7,1,5,3,6,4]` → `5`
2. `[7,6,4,3,1]` → `0`