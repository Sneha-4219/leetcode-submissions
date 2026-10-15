/* Structure for Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    int transform(Node *root) {
        if(root == NULL) {
            return 0;
        }
        
        int oldValue = root->data;
        
        int leftSum = transform(root->left);
        int rightSum = transform(root->right);
        
        root->data = leftSum + rightSum;
        
        return oldValue + leftSum + rightSum;
    }
    void toSumTree(Node *root) {
        transform(root);
    }
};