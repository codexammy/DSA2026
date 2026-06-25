/*
 * LeetCode #100 - Same Tree (Easy)
 *
 * Approach: Recursive DFS
 * Two trees are the same if their roots have equal values and
 * their left and right subtrees are also the same.
 *
 * Time Complexity:  O(n)
 * Space Complexity: O(h) where h is tree height (call stack)
 */

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q) return true;
        if (!p || !q) return false;
        return (p->val == q->val) &&
               isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }
};
