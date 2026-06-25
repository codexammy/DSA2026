/*
 * LeetCode #338 - Counting Bits (Easy)
 *
 * Approach: Dynamic Programming (Bit shift)
 * ans[i] = ans[i >> 1] + (i & 1)
 * The number of 1-bits in i equals the number of 1-bits in i/2 plus the LSB.
 *
 * Time Complexity:  O(n)
 * Space Complexity: O(n)
 */

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            ans[i] = ans[i >> 1] + (i & 1);
        }
        return ans;
    }
};
