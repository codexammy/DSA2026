/*
 * LeetCode #125 - Valid Palindrome (Easy)
 *
 * Approach: Two Pointers
 * Use left and right pointers, skipping non-alphanumeric characters.
 * Compare characters case-insensitively.
 *
 * Time Complexity:  O(n)
 * Space Complexity: O(1)
 */

#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = (int)s.size() - 1;
        while (left < right) {
            while (left < right && !isalnum(s[left]))  left++;
            while (left < right && !isalnum(s[right])) right--;
            if (tolower(s[left]) != tolower(s[right])) return false;
            left++;
            right--;
        }
        return true;
    }
};
