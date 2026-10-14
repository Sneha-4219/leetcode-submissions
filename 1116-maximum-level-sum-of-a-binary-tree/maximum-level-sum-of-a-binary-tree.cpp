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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        int maxSum = INT_MIN, sum = 0, k = 1;
        int maxLevel = k;

        q.push(root);
        q.push(NULL);
        while(q.size() > 0) {
            TreeNode* curr = q.front();
            q.pop();
            if(curr == NULL) {
                if(sum > maxSum) {
                    maxSum = sum;
                    maxLevel = k;
                }
                if(!q.empty()) {
                    sum = 0; k++;
                    q.push(NULL);
                    continue;
                } else {
                    break;
                }
            }
            sum += curr->val;

            if(curr->left != NULL) {
                q.push(curr->left);
            }

            if(curr->right != NULL) {
                q.push(curr->right);
            }
        }
        return maxLevel;
    }
};