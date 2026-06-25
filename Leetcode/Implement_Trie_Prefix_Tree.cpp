/*
 * LeetCode #208 - Implement Trie (Prefix Tree) (Easy/Medium)
 *
 * Approach: Array-based Trie Nodes
 * Each TrieNode holds 26 child pointers (one per lowercase letter)
 * and a flag marking whether it's the end of a word.
 *
 * Time Complexity:  O(m) per operation, where m = word length
 * Space Complexity: O(m * n) total for n words of average length m
 */

#include <string>
using namespace std;

class Trie {
    struct TrieNode {
        TrieNode* children[26];
        bool isEnd;
        TrieNode() : isEnd(false) {
            for (int i = 0; i < 26; i++) children[i] = nullptr;
        }
    };
    TrieNode* root;
public:
    Trie() { root = new TrieNode(); }

    void insert(string word) {
        TrieNode* node = root;
        for (char c : word) {
            int idx = c - 'a';
            if (!node->children[idx]) node->children[idx] = new TrieNode();
            node = node->children[idx];
        }
        node->isEnd = true;
    }

    bool search(string word) {
        TrieNode* node = root;
        for (char c : word) {
            int idx = c - 'a';
            if (!node->children[idx]) return false;
            node = node->children[idx];
        }
        return node->isEnd;
    }

    bool startsWith(string prefix) {
        TrieNode* node = root;
        for (char c : prefix) {
            int idx = c - 'a';
            if (!node->children[idx]) return false;
            node = node->children[idx];
        }
        return true;
    }
};
