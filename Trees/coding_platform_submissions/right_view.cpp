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
    vector<int> rightView(Node *root) {
        //  code here
                queue<Node *>q;
        vector<int>ans;
        
        
             q.push(root);
        
       
        
        while(!q.empty() && root!=NULL){
            
            int n = q.size();
          
            
            while(n--){
                Node *temp = q.front();
                q.pop();
                if(n == 0){
                    ans.push_back(temp->data);
                }
                
                if(temp->left){
                    q.push(temp->left);
                }
                
                if(temp->right){
                    q.push(temp->right);
                }
            }
            
        }
        
        return ans;
    }
};



//another approach using recursion
class Solution {
  public:
  
    void rightview(Node *root , int level ,vector<int> &ans ){
     
      
      if(!root){
          return;
      }
      
      
           if(level == ans.size()){
               ans.push_back(root->data);
           }
           
           rightview(root->right,level+1,ans);
           rightview(root->left ,level+1 ,ans);
           
  }
    vector<int> rightView(Node *root) {
 
        
        
        vector<int>ans;
        int level = 0;
        rightview(root , level , ans  );
        
         return ans;
    }
};