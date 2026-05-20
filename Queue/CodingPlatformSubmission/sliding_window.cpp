#include <iostream>
#include <queue>
using namespace std;
int main (){
    int arr[]={3,6,2,7,8,11};
    int n = 6;
    int k=1;

    queue<int>q;

    for(int i=0; i<n;i++){
        q.push(i);
    }
     

     
    while((q.front()+k <= n )&&!q.empty()){
         int start = q.front();
        for(int i=start ;i<start+k; i++){
            cout<<arr[i]<<" ";
        }
        
        q.pop();
        cout<<endl;
    }

}