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
    void preorder(TreeNode*root,vector<int>&leafnodes){
        if(root==NULL){
            return;
        }
        if(root && root->left==NULL && root->right==NULL){
            leafnodes.push_back(root->val);
        }
        preorder(root->left,leafnodes);
        preorder(root->right,leafnodes);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>leafnode1,leafnode2;
        preorder(root1,leafnode1);
        preorder(root2,leafnode2);
        int n=leafnode1.size();
        if(leafnode1==leafnode2){
            return true;
        }
        return false;
    }
};
