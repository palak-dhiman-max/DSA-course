class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        // queue<int> q;
        // int time =0;
        // int n = tickets.size();
    //     for(int i=0; i<n;i++){
    //                 q.push(i);
    //     }

    // while(tickets[k]!=0){


    //         tickets[q.front()]--;
    //         if(tickets[q.front()]==0){
    //             q.pop();
    //             time++;
    //         }
    //         else{
    //             q.push(q.front());
    //             q.pop();
    //             time++;
    //         }
        
    // }
    
    // return time;


    //second approach
        int time =0;
        int n = tickets.size();
        int i=0;

        while(i<n){

            if(i<=k){
                time+=min(tickets[k],tickets[i]);
            }
            else{
                time+=min(tickets[k]-1,tickets[i]);
            }

            i++;
        }

        return time;
    }
};