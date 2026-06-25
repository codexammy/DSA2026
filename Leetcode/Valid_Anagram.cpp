/*
 * LeetCode #242 - Valid Anagram (Easy)
 *
 * Approach: Character Frequency Count
 * Count character frequencies of s, then decrement using t.
 * If any frequency != 0 at the end, not an anagram.
 *
 * Time Complexity:  O(n)
 * Space Complexity: O(1)  — fixed 26-element array
 */

#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        int freq[26] = {};
        for (char c : s) freq[c - 'a']++;
        for (char c : t) freq[c - 'a']--;
        for (int f : freq) if (f != 0) return false;
        return true;
    }
};
