/*
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
    vector<int> topView(Node *root) {
        vector<int> ans;
        if (root == NULL) {
            return ans;
        }

        queue<pair<Node*, int>> q;
        map<int, int> m;

        q.push({root, 0});

        while (q.size() > 0) {
            Node* curr = q.front().first;
            int currHD = q.front().second;

            q.pop();

            if (m.find(currHD) == m.end()) {
                m[currHD] = curr->data;
            }

            if (curr->left != NULL) {
                q.push({curr->left, currHD - 1});
            }

            if (curr->right != NULL) {
                q.push({curr->right, currHD + 1});
            }
        }

        for (auto it : m) {
            ans.push_back(it.second);
        }

        return ans;
    }
};