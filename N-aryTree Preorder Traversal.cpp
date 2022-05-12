/*
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    
    void Traversal(Node* root, vector<int> &vec){
        
        if(root!=NULL){
            
            vec.push_back(root->val);
            for(int i=0; i<root->children.size();i++){
                Traversal(root->children[i],vec);
            }
            
        }
        
    }
    
    vector<int> preorder(Node* root) {
        
        vector<int> vec;
        Traversal(root,vec);
        return vec;
        
    }
};
