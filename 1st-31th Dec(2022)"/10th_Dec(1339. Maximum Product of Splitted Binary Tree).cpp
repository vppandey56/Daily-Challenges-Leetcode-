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
    long long int MOD=1e9+7;
    long long totalsum=0,ans=0;
    int find(TreeNode*root){
        if(root==NULL){
            return 0;
        }
        long long sum=find(root->left)+find(root->right)+root->val;
        ans=max(ans,(totalsum-sum)*sum);
        return sum;
    }
    int maxProduct(TreeNode* root) {
        totalsum=find(root);
        find(root);
        return ans%MOD;
    }
};
