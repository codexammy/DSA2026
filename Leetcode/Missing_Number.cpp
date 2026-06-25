/*
 * LeetCode #268 - Missing Number (Easy)
 *
 * Approach: Gauss' Formula
 * Expected sum of [0..n] = n*(n+1)/2. Subtract actual sum to find missing.
 *
 * Time Complexity:  O(n)
 * Space Complexity: O(1)
 */

#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = (int)nums.size();
        int expected = n * (n + 1) / 2;
        int actual = 0;
        for (int num : nums) actual += num;
        return expected - actual;
    }
};
