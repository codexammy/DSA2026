/*
 * LeetCode #212 - Word Search II (Hard)
 *
 * Approach: Trie + Backtracking DFS
 * Build a Trie from all words. For each cell, DFS and traverse the Trie
 * simultaneously, pruning paths early when no trie child exists.
 * Mark found words to avoid duplicates.
 *
 * Time Complexity:  O(M * N * 4 * 3^(L-1)) where L = max word length
 * Space Complexity: O(W * L) for the Trie
 */

#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
    struct TrieNode {
        unordered_map<char, TrieNode*> children;
        string word; // non-empty when this node ends a word
    };

    void insertWord(TrieNode* root, const string& word) {
        TrieNode* node = root;
        for (char c : word) {
            if (!node->children.count(c))
                node->children[c] = new TrieNode();
            node = node->children[c];
        }
        node->word = word;
    }

    void dfs(vector<vector<char>>& board, int r, int c, TrieNode* node, vector<string>& result) {
        if (r < 0 || r >= (int)board.size() || c < 0 || c >= (int)board[0].size()) return;
        char ch = board[r][c];
        if (ch == '#' || !node->children.count(ch)) return;

        TrieNode* next = node->children[ch];
        if (!next->word.empty()) {
            result.push_back(next->word);
            next->word = ""; // mark found
        }

        board[r][c] = '#'; // mark visited
        dfs(board, r + 1, c, next, result);
        dfs(board, r - 1, c, next, result);
        dfs(board, r, c + 1, next, result);
        dfs(board, r, c - 1, next, result);
        board[r][c] = ch; // restore
    }

public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        TrieNode* root = new TrieNode();
        for (const string& w : words) insertWord(root, w);

        vector<string> result;
        for (int r = 0; r < (int)board.size(); r++)
            for (int c = 0; c < (int)board[0].size(); c++)
                dfs(board, r, c, root, result);
        return result;
    }
};
