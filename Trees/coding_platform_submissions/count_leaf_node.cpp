 /* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// // Class Solution
// class Solution {
//   public:
//     // Function to count the number of leaf nodes in a binary tree.
    
//     void count(Node *root , int &c){
//         if(root==NULL){
//             return ;
//         }
        
//         if(!root->left && !root->right){
//             c++;
//             return;
//         }
        
//         count(root->left ,c);
//         count(root->right ,c);
//     }
    
    
//     int countLeaves(Node* root) {
//         // write code here
        
//         int c =0;
//         count(root,c);
//         return c;
//         }
// };


class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    

    int countLeaves(Node* root) {
        // write code here
        if(root==NULL){
            return 0;
        }
        
        if(!root->left && !root->right){
            return 1;
        }
               
    return (countLeaves(root->left) + countLeaves(root->right));
        
        
    }
 
};