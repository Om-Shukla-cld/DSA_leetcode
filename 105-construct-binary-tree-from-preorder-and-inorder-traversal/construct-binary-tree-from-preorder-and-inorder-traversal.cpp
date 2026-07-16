
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
class Solution {
public:
    int preindex = 0;  // Tracks current root in preorder traversal

    TreeNode* buildTreeUtil(vector<int>& preorder, vector<int>& inorder, int is, int ie) {
        if (is > ie) return nullptr;  // Base case: no elements left

        // Create root node from current preorder element
        TreeNode* root = new TreeNode(preorder[preindex]);
        preindex++;

        // Find root's position in inorder traversal
        int index;
        for (int i = is; i <= ie; i++) {
            if (inorder[i] == root->val) {
                index = i;
                break;
            }
        }

        // Recursively build left and right subtrees
        root->left = buildTreeUtil(preorder, inorder, is, index - 1);
        root->right = buildTreeUtil(preorder, inorder, index + 1, ie);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return buildTreeUtil(preorder, inorder, 0, inorder.size() - 1);
    }
};