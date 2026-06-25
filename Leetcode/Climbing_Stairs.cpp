/*
 * LeetCode #70 - Climbing Stairs (Easy)
 *
 * Approach: Dynamic Programming (Fibonacci)
 * dp[i] = number of ways to reach step i = dp[i-1] + dp[i-2].
 * Optimized to use only two variables (O(1) space).
 *
 * Time Complexity:  O(n)
 * Space Complexity: O(1)
 */

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        int prev2 = 1, prev1 = 2;
        for (int i = 3; i <= n; i++) {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};
