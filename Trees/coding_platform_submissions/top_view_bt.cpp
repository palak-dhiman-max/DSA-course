
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


class Solution {
  public:
  
  void find(Node *root ,int &l , int &r , int pos){
      
      if(!root){
          return;
      }
      
      l = min(l,pos);
      r = max(r,pos);
      
      find(root->left,l,r,pos-1);
      find(root->right , l ,r , pos+1);
  }
  
  
  
  
    vector<int> topView(Node *root) {
        // code here
        queue<Node*>q;
        queue<int>index;
        int l =0;
        int r=0;
        int pos =0;
        find(root ,l,r,pos);
        
        vector<int>ans(r-l+1);
        vector<bool>visited(r-l+1 ,0);
        
        q.push(root);
        index.push(-1*l);
        while(!q.empty()){
         
         Node *temp = q.front();
         q.pop();
         
         int pos = index.front();
         index.pop();
         
         if(!visited[pos]){
             visited[pos]=1;
             ans[pos]=temp->data;
         }
         
         if(temp->left){
             
             q.push(temp->left);
             index.push(pos-1);
         }
         
                if(temp->right){
             
             q.push(temp->right);
             index.push(pos+1);
         }
         
         
        }
        
        return ans;
    }
};



class Solution {
  public:
  
  void find(Node *root ,int &l , int &r , int pos){
      
      if(!root){
          return;
      }
      
      l = min(l,pos);
      r = max(r,pos);
      
      find(root->left,l,r,pos-1);
      find(root->right , l ,r , pos+1);
  }
  
void topview(Node *root ,vector<int>&ans, int pos, vector <int>&level ,int l ){
    
    if(!root){
        return;
    }
    
    if(level[pos]>l ){
        
          ans[pos]=root->data;
        level[pos]=l;
      
        
    }
    
    topview(root->left,ans ,pos-1,level,l+1);
    topview(root->right,ans,pos+1,level,l+1);
}
  
  
  
    vector<int> topView(Node *root) {
        // code here
       
        
        int l =0;
        int r=0;
       
      
        find(root ,l,r,0);
         
        vector<int>ans(r-l+1);
        
     
        vector<int>level(r-l+1,INT_MAX);
        topview(root,ans,-1*l,level,l);
        
        return ans;
    }
};