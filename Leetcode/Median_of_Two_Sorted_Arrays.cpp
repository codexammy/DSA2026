/*
 * LeetCode #4 - Median of Two Sorted Arrays (Hard)
 *
 * Approach: Binary Search on Partition
 * Binary search on the smaller array to find a partition such that
 * all elements on the left half (across both arrays) <= all elements on the right half.
 * The median is derived from the boundary elements.
 *
 * Time Complexity:  O(log(min(m, n)))
 * Space Complexity: O(1)
 */

#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Ensure nums1 is the smaller array
        if (nums1.size() > nums2.size()) return findMedianSortedArrays(nums2, nums1);

        int m = (int)nums1.size(), n = (int)nums2.size();
        int lo = 0, hi = m;

        while (lo <= hi) {
            int partX = (lo + hi) / 2;
            int partY = (m + n + 1) / 2 - partX;

            int maxLeftX  = (partX == 0) ? INT_MIN : nums1[partX - 1];
            int minRightX = (partX == m) ? INT_MAX : nums1[partX];
            int maxLeftY  = (partY == 0) ? INT_MIN : nums2[partY - 1];
            int minRightY = (partY == n) ? INT_MAX : nums2[partY];

            if (maxLeftX <= minRightY && maxLeftY <= minRightX) {
                if ((m + n) % 2 == 0)
                    return (max(maxLeftX, maxLeftY) + min(minRightX, minRightY)) / 2.0;
                else
                    return max(maxLeftX, maxLeftY);
            } else if (maxLeftX > minRightY) {
                hi = partX - 1;
            } else {
                lo = partX + 1;
            }
        }
        return 0.0;
    }
};
