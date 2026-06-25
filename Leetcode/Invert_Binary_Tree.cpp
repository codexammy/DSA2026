/*
 * LeetCode #226 - Invert Binary Tree (Easy)
 *
 * Approach: Recursive DFS (post-order)
 * Recursively invert left and right subtrees, then swap them.
 *
 * Time Complexity:  O(n)
 * Space Complexity: O(h) where h is tree height (call stack)
 */

#include <algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (!root) return nullptr;
        TreeNode* left  = invertTree(root->left);
        TreeNode* right = invertTree(root->right);
        root->left  = right;
        root->right = left;
        return root;
    }
};
