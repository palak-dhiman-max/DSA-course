 /* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Function to return a list containing the level order traversal in spiral form.
// class Solution {
//   public:
  
//   void findsum(Node *root , int &sum){
      
//       if(root==NULL){
//           return ;
//       }
      
//       sum+=root->data;
//       findsum(root->left ,sum);
//       findsum(root->right,sum);
      
      
//   }
  
  
//     int sumBT(Node* root) {
//         // code here
//         int sum =0;
//         findsum(root , sum);
//         return sum;
//     }
// };

//second method

class Solution {
  public:
  
    int sumBT(Node* root) {
        // code here
     if(root==NULL){
         return 0;
     }
     
     return (root->data + sumBT(root->left) + sumBT(root->right));
    }
};