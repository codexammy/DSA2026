/*
 * LeetCode #704 - Binary Search (Easy)
 *
 * Approach: Classic Binary Search
 * Maintain left and right pointers; compare mid element with target.
 * Narrow the search space by half each iteration.
 *
 * Time Complexity:  O(log n)
 * Space Complexity: O(1)
 */

#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = (int)nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] < target) left = mid + 1;
            else right = mid - 1;
        }
        return -1;
    }
};
