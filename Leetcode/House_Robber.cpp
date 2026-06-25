/*
 * LeetCode #198 - House Robber (Easy)
 *
 * Approach: Dynamic Programming (space-optimized)
 * dp[i] = max money robbing up to house i = max(dp[i-1], dp[i-2] + nums[i]).
 * Keep only the two previous values.
 *
 * Time Complexity:  O(n)
 * Space Complexity: O(1)
 */

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int prev2 = 0, prev1 = 0;
        for (int num : nums) {
            int curr = max(prev1, prev2 + num);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};
