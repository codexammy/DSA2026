/*
 * LeetCode #42 - Trapping Rain Water (Hard)
 *
 * Approach: Two Pointers
 * Maintain left/right pointers and track maxLeft, maxRight seen so far.
 * Water at any bar = min(maxLeft, maxRight) - height[bar].
 * Move the pointer with the smaller max inward.
 *
 * Time Complexity:  O(n)
 * Space Complexity: O(1)
 */

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = (int)height.size() - 1;
        int maxLeft = 0, maxRight = 0;
        int water = 0;
        while (left < right) {
            if (height[left] <= height[right]) {
                maxLeft = max(maxLeft, height[left]);
                water += maxLeft - height[left];
                left++;
            } else {
                maxRight = max(maxRight, height[right]);
                water += maxRight - height[right];
                right--;
            }
        }
        return water;
    }
};
