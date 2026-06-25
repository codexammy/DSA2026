/*
 * LeetCode #297 - Serialize and Deserialize Binary Tree (Hard)
 *
 * Approach: BFS Level-order (with null markers)
 * Serialize: BFS, output each node value or "null".
 * Deserialize: BFS, pair each parent with its two children from the queue.
 *
 * Time Complexity:  O(n) for both serialize and deserialize
 * Space Complexity: O(n)
 */

#include <string>
#include <queue>
#include <sstream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Codec {
public:
    string serialize(TreeNode* root) {
        if (!root) return "";
        string result;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* node = q.front(); q.pop();
            if (node) {
                result += to_string(node->val) + ",";
                q.push(node->left);
                q.push(node->right);
            } else {
                result += "null,";
            }
        }
        return result;
    }

    TreeNode* deserialize(string data) {
        if (data.empty()) return nullptr;
        istringstream ss(data);
        string token;
        getline(ss, token, ',');
        TreeNode* root = new TreeNode(stoi(token));
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* node = q.front(); q.pop();
            // left child
            if (getline(ss, token, ',')) {
                if (token != "null") {
                    node->left = new TreeNode(stoi(token));
                    q.push(node->left);
                }
            }
            // right child
            if (getline(ss, token, ',')) {
                if (token != "null") {
                    node->right = new TreeNode(stoi(token));
                    q.push(node->right);
                }
            }
        }
        return root;
    }
};
