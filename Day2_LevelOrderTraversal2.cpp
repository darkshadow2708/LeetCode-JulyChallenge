class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>v;
        if(root==NULL)
            return v;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);//This will denote the change in level
        vector<int>temp;
        while(!q.empty())//Simple Bfs
        {
            TreeNode *curr=q.front();
            q.pop();
            if(curr!=NULL)
            {
            temp.push_back(curr->val);
            if(curr->left!=NULL)
            q.push(curr->left);
            if(curr->right!=NULL)
            q.push(curr->right);
            }
            if(curr==NULL)
            {
                v.push_back(temp);//since curr is Null therefore this will denote a change in level 
                temp.clear();
                if(!q.empty())
                q.push(NULL);//Again to look for change in level
            }
  
            
        }
        reverse(v.begin(),v.end());//Since,it is asked to print in Bottom up manner
        return v;
        
    }
};
