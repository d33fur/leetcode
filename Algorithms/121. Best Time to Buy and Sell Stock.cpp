/*
121. Best Time to Buy and Sell Stock
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0, min = 0, n = prices.size(), m = INT_MAX;
        for(int i = 0; i < n; i++) {
            if(prices[i] < m)
                m = prices[i];
            max = prices[i] - m;
            if(min < max)
                min = max;
        }
        return min;

    }
};