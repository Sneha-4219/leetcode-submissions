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
    int helper(TreeNode* root, int maxVal) {
        int count = 0;
         if(root == NULL) return 0;

        if(maxVal <= root->val) {
            count++;
            maxVal = root->val;
        }

        int leftCount = helper(root->left, maxVal);
        int rightCount = helper(root->right, maxVal);

        return count + leftCount + rightCount;
    }
    int goodNodes(TreeNode* root) {
        if(root == NULL) return 0;
        return helper(root, root->val);
    }
};