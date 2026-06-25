/*
 * LeetCode #110 - Balanced Binary Tree (Easy)
 *
 * Approach: Bottom-up DFS with height tracking
 * Return -1 (sentinel) if subtree is unbalanced; otherwise return its height.
 * Avoids redundant recomputation of heights.
 *
 * Time Complexity:  O(n)
 * Space Complexity: O(h) where h is tree height (call stack)
 */

#include <cmath>
#include <algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
    int dfs(TreeNode* node) {
        if (!node) return 0;
        int left  = dfs(node->left);
        if (left == -1) return -1;
        int right = dfs(node->right);
        if (right == -1) return -1;
        if (abs(left - right) > 1) return -1;
        return 1 + max(left, right);
    }
public:
    bool isBalanced(TreeNode* root) {
        return dfs(root) != -1;
    }
};
