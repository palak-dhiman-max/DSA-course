 #include<iostream>
 using namespace std;

 // find the first occurence of a given a number element x,given that array is sorted ,if no occuence of x found so return -1

//  int firstoccurence(int arr[],int low, int high, int mid,int x){
//     int ans =-1;
   
//     while(low<=high){
//          mid = low+(high-low)/2;
//         if(x==arr[mid]){
//             ans=mid;
//             high=mid-1;
//         }
//         else if(x>arr[mid]){
//             low = mid+1;
//         }
//         else {
//             high = mid-1;
//         }
//     }
//     return ans;
//  }

//  int main (){
// int n;
// cout<<"enter size of array :";
// cin>>n;
// int x;
// cout<<"enter target :";
// cin>>x;
// cout<<"enter elemnts in array:";
// int arr[n];
// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }

// int result;
// int low=0;
// int high = n-1;
// int mid;

//  result= firstoccurence(arr,low,high,mid,x);
//  cout<<result;
//  }


 // find the square root of given non-negative value x . round it off to nearest floor digit.
//  int squareroot(int x,int low,int high,int mid){
//     int ans=-1;
// while(low<=high){
//     mid = low+ (high-low)/2;

//     if(mid*mid==x){
//         ans = mid;
//         // break statement is to stop infinite loop as low ,high,mid all point to one index so value of mid dont change and infinite loop is there so we have to break
//         break;
        
//     }
//     else if(mid*mid<x){
//         ans = mid;
//         low = mid+1; 
//     }
//     else{
// high=mid-1;
//     }
// }
// return ans;
//  }

//  int main (){
//     int x;
//     cout<<"enter a non negative number :";
//     cin>>x;
// int low=1;
// int result;
// int high = x;
// int mid;

// result=squareroot(x,low,high,mid);
// cout<<result;
//  }

 // given an array of integers "a"that is sorted in non decreasing order find the first occurence and last occurence of the target if target not found so return [-1,-1]

//  // calculating first occurence 

 int firstoccurence(int arr[],int low, int high, int mid,int x){
    int ans =-1;
   
    while(low<=high){
         mid = low+(high-low)/2;
        if(x==arr[mid]){
            ans=mid;
            high=mid-1;
        }
        else if(x>arr[mid]){
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    return ans;
 }

 // calculating last occurence 
 int lastoccurence(int arr[],int low, int high, int mid,int x){
    int ans =-1;
   
    while(low<=high){
         mid = low+(high-low)/2;
        if(x==arr[mid]){
            ans=mid;
            low =mid+1;
        }
        else if(x>arr[mid]){
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    return ans;
 }

 int main (){
int n;
cout<<"enter size of array :";
cin>>n;
int x;
cout<<"enter target :";
cin>>x;
cout<<"enter elemnts in array:";
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}

int result;
int result2;
int low=0;
int high = n-1;
int mid;

 result = firstoccurence(arr,low,high,mid,x);
 
 result2 = lastoccurence(arr,low,high,mid,x);
 cout<<"["<<result<<" "<<result2<<"]";
 }
