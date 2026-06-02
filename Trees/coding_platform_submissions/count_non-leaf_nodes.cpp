/*Structure of the node of the tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// you are required to complete this function
// the function should return the count of Non-Leaf Nodes
class Solution {
  public:
  
  void nonleaf(Node *root ,int &count){
      
      if(root==NULL){
          return;
      }
      
      if(root->left || root->right){
          count++;
      }
      
     nonleaf(root->left ,count);
     nonleaf(root->right ,count);
  }
  
    int countNonLeafNodes(Node* root) {
        // Code here
        int count =0;
        nonleaf(root,count);
        
        return count;
    }
};