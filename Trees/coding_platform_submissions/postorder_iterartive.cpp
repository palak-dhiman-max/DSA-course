// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
  public:
    vector<int> postOrder(Node* node) {
        // code here
                stack <Node *>s;
                
                //traversing as node right left then reverse it we get 
                // left right node because it is eaiser to find nrl
        
        vector <int>ans;
        s.push(node);
        
        while(!s.empty()){
            Node *temp = s.top();
            s.pop();
            ans.push_back(temp->data);
       
            
               if(temp->left){
                s.push(temp->left);
            }
            
                 
            if(temp->right){
                s.push(temp->right);
            }
            
        }
        
        reverse(ans.begin() , ans.end());
        
        return ans;
        
    }
};