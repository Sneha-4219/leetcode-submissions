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
    TreeNode* dfs(TreeNode* node, int floor, int ceiling, unordered_map<int, TreeNode*>&map, bool& isValid) {

        if(node == NULL || !isValid) return NULL;
        // 1. Bounds check
        if(node->val <= floor || node->val >= ceiling) {
            isValid = false;
            return NULL;
        }

        // 2. Snapping Check(whether a leaf)
        if(node->left == NULL && node->right == NULL) {
            if(map.count(node->val)) {
                node = map[node->val];
                map.erase(node->val);
            }
        }

        // 3. Recursion
        node->left = dfs(node->left, floor, node->val, map, isValid);
        node->right = dfs(node->right, node->val, ceiling, map, isValid);

        return node;
    }

    TreeNode* canMerge(vector<TreeNode*>& trees) {
        unordered_map<int, TreeNode*> map;
        unordered_set<int> leaves;

        // 1. Fill the bucket and the leaf set
        for(TreeNode* tree : trees) {
            map[tree->val] = tree;

            if(tree->left != NULL) {
                leaves.insert(tree->left->val);
            }

            if(tree->right != NULL) {
                leaves.insert(tree->right->val);
            }
        }

        // 2. Find the absolute root
        TreeNode* absoluteRoot = NULL;

        for(TreeNode* tree : trees) {
            if(leaves.find(tree->val) == leaves.end()) {
                absoluteRoot = tree;
                break;
            }
        }

        if(absoluteRoot == NULL) return NULL;

        // 3. Handing to DFS
        map.erase(absoluteRoot->val);

        bool isValid = true;
        absoluteRoot = dfs(absoluteRoot, INT_MIN, INT_MAX, map, isValid);

        // 4. Final Check
        if(isValid && map.empty() == true) {
            return absoluteRoot;
        } else {
            return NULL;
        }
    }
};