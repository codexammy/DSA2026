/*
 * LeetCode #127 - Word Ladder (Hard)
 *
 * Approach: Bidirectional BFS
 * Run BFS from both beginWord and endWord simultaneously.
 * At each step, expand from the smaller frontier.
 * Return step count when the frontiers intersect.
 *
 * Time Complexity:  O(M^2 * N) where M = word length, N = wordList size
 * Space Complexity: O(M^2 * N)
 */

#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> wordSet(wordList.begin(), wordList.end());
        if (!wordSet.count(endWord)) return 0;

        unordered_set<string> front{beginWord}, back{endWord};
        int steps = 1;
        while (!front.empty() && !back.empty()) {
            // always expand smaller set
            if (front.size() > back.size()) swap(front, back);
            unordered_set<string> next;
            for (string word : front) {
                for (int i = 0; i < (int)word.size(); i++) {
                    char orig = word[i];
                    for (char c = 'a'; c <= 'z'; c++) {
                        word[i] = c;
                        if (back.count(word)) return steps + 1;
                        if (wordSet.count(word)) {
                            next.insert(word);
                            wordSet.erase(word);
                        }
                    }
                    word[i] = orig;
                }
            }
            front = next;
            steps++;
        }
        return 0;
    }
};
