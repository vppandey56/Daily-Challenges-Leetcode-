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
    int countNodes(TreeNode* root) {
        if(root==0){
            return 0;
        }
        TreeNode *left=root,*right=root;
        int Right_height=0,Left_height=0;
        while(left){
            Left_height++;
            left=left->left;
        }
        while(right){
            Right_height++;
            right=right->right;

        }
        if(Left_height==Right_height){
            return pow(2,Left_height) - 1;
            
        }
        return (1 + countNodes(root->left) + countNodes(root->right));
        
    }
};
