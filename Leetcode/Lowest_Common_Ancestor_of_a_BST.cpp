/*
 * LeetCode #235 - Lowest Common Ancestor of a Binary Search Tree (Easy)
 *
 * Approach: BST Property Traversal
 * If both p and q are less than current node, go left.
 * If both are greater, go right.
 * Otherwise, current node is the LCA.
 *
 * Time Complexity:  O(h) where h is tree height
 * Space Complexity: O(1)  — iterative
 */

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while (root) {
            if (p->val < root->val && q->val < root->val) {
                root = root->left;
            } else if (p->val > root->val && q->val > root->val) {
                root = root->right;
            } else {
                return root;
            }
        }
        return nullptr;
    }
};
