/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    // Helper function to perform DFS and track the largest value at each level
    void dfs(TreeNode* root, map<int, int>& mp, int level) {
        if (!root)
            return;

        // If the level already exists in the map, update with the maximum value
        if (mp.count(level)) {
            mp[level] = max(mp[level], root->val);
        } else {
            // Otherwise, insert the current node value for this level
            mp[level] = root->val;
        }

        // Recurse for left and right children with increased level
        dfs(root->left, mp, level + 1);
        dfs(root->right, mp, level + 1);
    }

    // Returns a vector containing the largest value in each row of a binary tree
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        map<int, int> mp;  // Stores the largest value at each level (ordered by level)

        // Perform DFS traversal to fill the map
        dfs(root, mp, 0);

        // Extract values from the map in order of levels
        for (auto& [level, val] : mp) {
            ans.push_back(val);
        }

        return ans;
    }
};
