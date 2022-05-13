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
    
    int mind(TreeNode* root){
            
       if(root==NULL)
           return 0;
       int btls=mind(root->left);
       int btrs=mind(root->right);
       int res;
       if(btls==0 || btrs==0)
           res=max(btls,btrs);
       else
           res=min(btls,btrs);
       return 1+res;
       
         
        
    }
    
    int minDepth(TreeNode* root) {
        int h;
        h=mind(root);
        return h;
    }
};
