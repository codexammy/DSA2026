/*
 * LeetCode #217 - Contains Duplicate (Easy)
 *
 * Approach: Hash Set
 * Insert each number into an unordered_set. If we try to insert a number
 * that already exists, a duplicate is found.
 *
 * Time Complexity:  O(n)
 * Space Complexity: O(n)
 */

#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num)) return true;
            seen.insert(num);
        }
        return false;
    }
};
