/*
 * LeetCode #53 - Maximum Subarray (Easy)
 *
 * Approach: Kadane's Algorithm
 * Maintain a running sum. If it drops below 0, reset it to 0.
 * Track the maximum sum seen at any point.
 *
 * Time Complexity:  O(n)
 * Space Complexity: O(1)
 */

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int current = nums[0];
        for (int i = 1; i < (int)nums.size(); i++) {
            current = max(nums[i], current + nums[i]);
            maxSum = max(maxSum, current);
        }
        return maxSum;
    }
};
