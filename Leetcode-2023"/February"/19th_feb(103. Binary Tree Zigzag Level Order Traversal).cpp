class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>>v;
        queue<TreeNode*>q;
        if(!root)
        {
            return v;
        }
        q.push(root);
        int level=0;
        while(!q.empty())
        {
          int n=q.size();
          vector<int>vec;
            for(int i=0;i<n;i++)
            {
              auto value=q.front();
                q.pop();
                vec.push_back(value->val);
                
                if(value->left)
                {
                    q.push(value->left);
                }
                if(value->right)
                {
                  q.push(value->right);  
                }
                
            }
            if(level%2 != 0)
            {
            reverse(vec.begin(),vec.end());
             }
                v.push_back(vec);
                 vec.clear();
                level++;
        }
            return v;
        
    }
};
