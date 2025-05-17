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
    // Returns a vector containing the largest value in each row of a binary tree
    vector<int> largestValues(TreeNode* root) {
        // If the tree is empty, return an empty vector
        if (!root) {
            return {};
        }

        vector<int> ans;              // Stores the largest value at each level
        queue<TreeNode*> q;           // Queue for level order traversal
        q.push(root);

        while (!q.empty()) {
            int n = q.size();         // Number of nodes at the current level
            int maxans = INT_MIN;     // Initialize max value for this level

            // Traverse all nodes at the current level
            while (n--) {
                TreeNode* top = q.front();
                q.pop();

                // Update max value for this level
                maxans = max(maxans, top->val);

                // Push left and right children to the queue if they exist
                if (top->left) {
                    q.push(top->left);
                }
                if (top->right) {
                    q.push(top->right);
                }
            }

            // Add the max value of the current level to the result
            ans.push_back(maxans);
        }

        return ans;
    }
};
