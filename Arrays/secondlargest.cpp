#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter size of array:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int max;
    int max2 =arr[0]; 
    max = arr[0];
    for(int i=1; i<n; i++){


        //7 5 6 4 8 1
if(arr[i]>max){
    // storing previous max in max2
    max2=max;
    max=arr[i];
}

else if(arr[i]<max && max2<arr[i]){
    max2=arr[i];
    
}
    }
cout<<max2<<endl;


}