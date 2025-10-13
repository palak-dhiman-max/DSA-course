#include<iostream>
using namespace std;

int main (){

    int arr []={100,200,300,400,500};
int n =5;
            
        // code here
        int k =2;
        int sum =0;
      int indx=0;
        int maxsum =INT16_MIN;
        
        while(k<n){
            
        
  for(int i=indx;i<n-k; i++){
      
      sum = sum + arr[i];
      
      if(sum>maxsum){
          maxsum = sum;
      }
      
  }

  sum =0;
       indx = k-1;
    
        
        }
       

        cout<<maxsum;
    }


