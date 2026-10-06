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
    int height(TreeNode* root) {
        if(root == NULL) {
            return 0;
        }

        int leftHt = height(root->left);
        int rightHt = height(root->right);

        return max(leftHt, rightHt) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL) {
            return true;
        }
        int leftSub = height(root->left);
        int rightSub = height(root->right);

        if(abs(leftSub - rightSub) > 1) {
            return false;
        }

        return isBalanced(root->left) && isBalanced(root->right);
    }
};