#include <bits/stdc++.h>
using namespace std;

// LeetCode 121 - Best Time to Buy and Sell Stock
//
// Pattern: One-pass / Running Minimum
//
// Key idea:
// While scanning from left to right, remember the cheapest price seen so far.
// If we sell today:
//
// profit = current price - minimum price seen before/currently
//
// Keep the best profit.
//
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            minPrice = min(minPrice, prices[i]);

            int profit = prices[i] - minPrice;

            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
    }
};