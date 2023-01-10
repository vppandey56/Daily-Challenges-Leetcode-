class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q == nullptr) return true; 
        if(p == nullptr || q == nullptr) return false; 
        if(p->val != q->val) return false; 
        return  isSameTree(p->left,q->left) &&
                isSameTree(p->right,q->right);
    }
};


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
    bool isSameTree(TreeNode* t1, TreeNode* t2) {
         if(t1==NULL){
            if(t2!=NULL){
                return false;
            }
            else{
                return true;
            }
        }
        if(t2==NULL){
            if(t1!=NULL){
                return false;
            }
            else{
                return true;
            }
        }
        if(t1->val!=t2->val){
            return false;
        }
        bool left=isSameTree(t1->left,t2->left);
        bool right=isSameTree(t1->right,t2->right);
        return left && right;
    }
};
