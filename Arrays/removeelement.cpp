#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter n: ";
    cin>>n;

    int val;
    cout<<"enter val: ";
    cin>>val;

    cout<<"enter elemnts";

    int nums[n];
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

        int i,j,nums1;
        i=0;
        j=n-1;
        int k =0;
nums1 = 0;

        while(i<=j){

            if(nums[i]==val){
                swap(nums[i],nums[j]);
                j--;
                i++;
                nums1++;
            }

            else if(nums[j]==val){
                j--;
                nums1++;
            }

            else{
                i++;
            }
        }

       
        k=n-nums1;
     
        for(int i=0; i<k; i++){
            cout<<nums[i]<<" ";
        }

    }
