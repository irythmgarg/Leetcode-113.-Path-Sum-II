/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    // Default constructor
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    // Constructor with value
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    // Constructor with value and child pointers
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    /**
     * Helper function to perform DFS traversal and find all root-to-leaf paths
     * whose sum equals the targetSum.
     *
     * @param root - Current TreeNode being visited.
     * @param targetSum - Target sum to achieve.
     * @param mainans - Stores all valid paths.
     * @param ans - Current path from root to current node.
     * @param sum - Sum of the current path.
     */
    void hlo(TreeNode* root, int targetSum, vector<vector<int>>& mainans, vector<int>& ans, int sum) {
        if (!root) return; // Base case: if node is null, return

        // Check if current node is a leaf
        if (!root->left && !root->right) {
            ans.push_back(root->val); // Add leaf node to current path
            if (sum + root->val == targetSum) {
                mainans.push_back(ans); // Store valid path
            }
            ans.pop_back(); // Backtrack
            return;
        }

        ans.push_back(root->val); // Add current node to path

        // Recur for left and right subtrees
        hlo(root->left, targetSum, mainans, ans, sum + root->val);
        hlo(root->right, targetSum, mainans, ans, sum + root->val);

        ans.pop_back(); // Backtrack after exploring both subtrees
    }

    /**
     * Main function to find all root-to-leaf paths where each path's sum equals targetSum.
     *
     * @param root - Root of the binary tree.
     * @param targetSum - The target sum to be achieved.
     * @return A vector of vectors containing all valid root-to-leaf paths.
     */
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        // Edge case: empty tree and target sum 0
        if (targetSum == 0 && !root) return {};

        vector<vector<int>> mainans; // Stores all valid paths
        vector<int> ans;             // Temporary vector to store current path
        int sum = 0;                 // Initialize sum of current path as 0

        hlo(root, targetSum, mainans, ans, sum); // Call helper function
        return mainans;
    }
};
