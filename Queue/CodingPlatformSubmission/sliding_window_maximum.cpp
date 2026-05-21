class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // vector<int> ans;
        // int max;
        // for(int i=0; i<=nums.size()-k;i++){
        //         max =nums[i];
        //     for(int j=i; j<i+k;j++){
        //         if(nums[j]>max){
        //             max =nums[j];
        //         }
        //     }
        //     ans.push_back(max);
        // }

        // return ans;


        //optimised approach 

        vector<int>ans;
        deque<int>d;
        for(int i=0; i<k-1; i++){
            if(d.empty()){
                d.push_back(i);
            }
            else{
                while(!d.empty() && nums[i] > nums[d.back()]){
                    d.pop_back();
                }

                d.push_back(i);
            }
        }


        for(int i =k-1; i<nums.size();i++){

        while(!d.empty() && nums[i] > nums[d.back()]){
                    d.pop_back();
                }

                d.push_back(i);

        if(d.front() <= i-k){
            d.pop_front();
        }

        ans.push_back(nums[d.front()]);
        }

        return ans;
    }
};