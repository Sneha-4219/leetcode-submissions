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
    void inOrder(TreeNode* root, int k, int& counter, int& result) {
        if(root == NULL) {
            return;
        }

        inOrder(root->left, k, counter, result);
        counter++;
        if(counter == k) {
            result = root->val;
            return;
        }
        inOrder(root->right, k, counter, result);
    }
    int kthSmallest(TreeNode* root, int k) {
        int counter = 0;
        int result = 0;

        inOrder(root, k, counter, result);
        return result;
    }
};