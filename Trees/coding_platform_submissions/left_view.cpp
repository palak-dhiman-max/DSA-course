/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
        queue<Node *>q;
        vector<int>ans;
        
        
             q.push(root);
        
       
        
        while(!q.empty() && root!=NULL){
            
            int n = q.size();
            int m =n;
            
            while(n--){
                Node *temp = q.front();
                q.pop();
                if(n == m-1){
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


//using recursion

class Solution {
  public:
  
  void leftview(Node *root , int level ,vector<int> &ans ){
     
      
      if(!root){
          return;
      }
      
      
           if(level == ans.size()){
               ans.push_back(root->data);
           }
           
        
           leftview(root->left ,level+1 ,ans);
           leftview(root->right,level+1,ans);
  }
    vector<int> leftView(Node *root) {
        // code here
      
        vector<int>ans;
        int level = 0;
        leftview(root , level , ans  );
        
         return ans;
        
 
    } 
};