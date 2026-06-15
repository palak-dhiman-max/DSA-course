/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

// class Solution {
//   public:
  
//   void countNode (Node * root ,int &count){
      
//       if(root==NULL){
//           return;
//       }
      
//       count++;
//       countNode(root->left ,count);
//       countNode(root->right ,count);
//   }
//     int getSize(Node* node) {
//         // code here
//         int count =0;
//       countNode(node,count);
//       return count;
//     }
// };


//method-2
class Solution {
  public:
  
 
    int getSize(Node* node) {
        // code here
        if(node==NULL){
            return 0;
        }
        
        return( 1 + getSize(node->left)+getSize(node->right));
    }
};