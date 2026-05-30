/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  
  int height (Node *root,int &valid){
      
      if(!root){
          return 0;
      }
      
      int l = height(root->left ,valid);
      int r = height(root->right ,valid);
      
      if(abs(l-r) >1){
          valid = 0;
      }
      return 1 + max(height(root->left,valid) ,height(root->right,valid));
  }
  
  
    bool isBalanced(Node* root) {
        // code here
        int valid = 1;
        height(root,valid);
        return valid;
    }
};