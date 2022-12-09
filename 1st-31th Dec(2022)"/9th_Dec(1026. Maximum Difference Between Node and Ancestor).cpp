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
    int find(TreeNode* root,int maxnum,int minnum){
        if(root==NULL){
            return maxnum-minnum;
        }
        maxnum=max(maxnum,root->val);
        minnum=min(minnum,root->val);
        return max(find(root->left,maxnum,minnum),find(root->right,maxnum,minnum));
    }
    int maxAncestorDiff(TreeNode* root) {
        int maxnum=0,minnum=100000;
        return find(root,maxnum,minnum);
    }
};
