/*
 * LeetCode #191 - Number of 1 Bits (Easy)
 *
 * Approach: Brian Kernighan's Algorithm
 * Repeatedly clear the lowest set bit with n &= (n - 1) and count iterations.
 *
 * Time Complexity:  O(k) where k = number of set bits
 * Space Complexity: O(1)
 */

#include <cstdint>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while (n) {
            n &= (n - 1); // clears the lowest set bit
            count++;
        }
        return count;
    }
};
