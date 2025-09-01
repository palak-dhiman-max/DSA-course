#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int k;
    k=3;
    int nums[n];
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    
        int arr[n];
        int i = 0;
        int indx = n-k;
        int indx1 =0;
        while(i<n){

            if(indx!=n){
                arr[i]=nums[indx];
                indx++;
                i++;
            }

            else{
                arr[i] = nums[indx1];
                indx1++;
                i++;
            }
        }

            for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}