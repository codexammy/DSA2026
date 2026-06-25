/*
 * LeetCode #104 - Maximum Depth of Binary Tree (Easy)
 *
 * Approach: Recursive DFS
 * The depth of a tree is 1 + max(depth(left), depth(right)).
 * Base case: null node has depth 0.
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
    int maxDepth(TreeNode* root) {
        if (!root) return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};
