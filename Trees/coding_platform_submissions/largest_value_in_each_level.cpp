
class Solution {
  public:
    vector<int> largestValues(Node* root) {
        // code here
        
        queue<Node *>q;
        int max1 = INT_MIN;
        vector<int>ans;
        
        q.push(root);
        
        while(!q.empty()){
            
            int n = q.size();
            
            while(n--){
                Node *temp = q.front();
                q.pop();
                 max1 = max(max1 , temp->data);
                 
                 if(temp->left){
                     q.push(temp->left);
                 }
                 
                 if(temp->right){
                     q.push(temp->right);
                 }
            }
            
            ans.push_back(max1);
            max1 = INT_MIN;
        }
        
        return ans;
    }
};