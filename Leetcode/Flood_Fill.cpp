/*
 * LeetCode #733 - Flood Fill (Easy)
 *
 * Approach: DFS / BFS from starting pixel
 * Starting from (sr, sc), recursively paint all 4-directionally connected
 * pixels that share the original color with the new color.
 * Guard against infinite loop when newColor == original color.
 *
 * Time Complexity:  O(m * n)
 * Space Complexity: O(m * n)  — recursion stack in worst case
 */

#include <vector>
using namespace std;

class Solution {
    void dfs(vector<vector<int>>& image, int r, int c, int oldColor, int newColor) {
        if (r < 0 || r >= (int)image.size() || c < 0 || c >= (int)image[0].size()) return;
        if (image[r][c] != oldColor) return;
        image[r][c] = newColor;
        dfs(image, r + 1, c, oldColor, newColor);
        dfs(image, r - 1, c, oldColor, newColor);
        dfs(image, r, c + 1, oldColor, newColor);
        dfs(image, r, c - 1, oldColor, newColor);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldColor = image[sr][sc];
        if (oldColor != color) dfs(image, sr, sc, oldColor, color);
        return image;
    }
};
