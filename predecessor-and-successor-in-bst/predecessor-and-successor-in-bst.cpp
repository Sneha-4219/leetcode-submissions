/*
Structure of a Binary Search Tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    Node* rightMostinLeft(Node* root) {
        Node* ans = NULL;
        while (root != NULL) {
            ans = root;
            root = root->right;
        }
        return ans;
    }

    Node* leftMostinRight(Node* root) {
        Node* ans = NULL;
        while (root != NULL) {
            ans = root;
            root = root->left;
        }
        return ans;
    }

    vector<Node*> findPreSuc(Node* root, int key) {
        Node* curr = root;
        Node* pred = NULL;
        Node* succ = NULL;

        while (curr != NULL) {
            if (key < curr->data) {
                succ = curr;
                curr = curr->left;
            } 
            else if (key > curr->data) {
                pred = curr;
                curr = curr->right;
            } 
            else {
                if (curr->left != NULL) {
                    pred = rightMostinLeft(curr->left);
                }

                if (curr->right != NULL) {
                    succ = leftMostinRight(curr->right);
                }
                break;
            }
        }

        return {pred, succ};
    }
};