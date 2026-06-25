/*
 * LeetCode #1 - Two Sum (Easy)
 *
 * Approach: Hash Map (One-pass)
 * For each element, check if its complement (target - nums[i]) already exists
 * in the hash map. If yes, return the indices. Otherwise, store current element.
 *
 * Time Complexity:  O(n)
 * Space Complexity: O(n)
 */

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen; // value -> index
        for (int i = 0; i < (int)nums.size(); i++) {
            int complement = target - nums[i];
            if (seen.count(complement)) {
                return {seen[complement], i};
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};
