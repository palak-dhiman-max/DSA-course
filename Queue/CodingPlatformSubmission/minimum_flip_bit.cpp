class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        // int flip =0;

        // for(int i=0; i<nums.size();i++){
           
       
        //  if(nums[i]==0){

        //      if(i+k>nums.size()){
        //     return -1;
        //    }


        //     for(int j=i; j<i+k; j++){

        //         if(nums[j]==0){
        //             nums[j]=1;
        //         }else{
        //             nums[j]=0;
        //         }
        //     }

        //     flip++;
        // }
        // }
        // return flip;


        //optimised approach

        int flip =0;
        queue<int>q;

        for(int i=0; i<nums.size(); i++){
            

           

            if( !q.empty() && i> q.front()){
                q.pop();
            }

          if(nums[i]==0){
    
            if(q.size()%2==0){
                 if(i+k-1>=nums.size()){
                    return -1;
                }
                q.push(i+k-1);
                  flip++;
            }

          
          }

          else{

            if(q.size()%2!=0){

                   if(i+k-1>=nums.size()){
                    return -1;
                }
                q.push(i+k-1);
                 flip++;
            }

           
          }
        }

        return flip;
    }
};