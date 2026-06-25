/*
 * LeetCode #121 - Best Time to Buy and Sell Stock (Easy)
 *
 * Approach: Single Pass / Kadane's variant
 * Track the minimum price seen so far and the maximum profit achievable
 * by selling on the current day.
 *
 * Time Complexity:  O(n)
 * Space Complexity: O(1)
 */

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price;
            } else {
                maxProfit = max(maxProfit, price - minPrice);
            }
        }
        return maxProfit;
    }
};
