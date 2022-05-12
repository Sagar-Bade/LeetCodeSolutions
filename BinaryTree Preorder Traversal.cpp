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
    
    void Traversal(TreeNode* root, vector<int> &vec){
        
        if(root!=NULL){
            vec.push_back(root->val);
            Traversal(root->left,vec);
            Traversal(root->right,vec);
            
        }
    }
    
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> vec;
        Traversal(root,vec);
        return vec;
    }
};
