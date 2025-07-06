 # include<iostream>
 # include<algorithm>
 using namespace std;

// int mountainarraypeakelement(int arr[],int low, int high,int n){
//     int mid;
//     int ans = -1;

// while(low<=high){
//     mid = low + (high-low)/2;

//     if(arr[mid]>arr[mid-1]){
//         ans = max(ans,mid);
//         low = mid +1;
//     }else{
//         high = mid -1;
//     }

// }
// return ans;
// }
//  int main (){
// int n;
// cout<<"enter size of array :";
// cin>>n;
// int arr[n];
// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }
// int low=0; 
// int high= n-1;
// int result;

// result = mountainarraypeakelement(arr,low,high,n);
// cout<<"target is at index :"<<result;
//  }


// same queation as above but there are some more mountains in array which seems to be unsorted

// int mountainarraypeakelement(int arr[],int low, int high,int n){
//     int mid;
    

// while(low<=high){
//     mid = low + (high-low)/2;

//     if(mid==0){
//         if(arr[mid]>arr[mid+1]){
//             return 0;
//         }else{
//             return 1;
//         }
//     }


    
//    else if(mid==n-1){
//         if(arr[mid]>arr[mid-1]){
//             return  n-1;
//         }else{
//             return n-2;
//         }
//     }


//     else{

//         if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
//            return mid;
//         }
   
//     else if(arr[mid]>arr[mid-1]){
 
//         low = mid +1;
//     }else{
//         high = mid -1;
//     }
//  }

// }
// return -1;
// }
//  int main (){
// int n;
// cout<<"enter size of array :";
// cin>>n;
// int arr[n];
// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }
// int low=0; 
// int high= n-1;
// int result;

// result = mountainarraypeakelement(arr,low,high,n);
// cout<<"target is at index :"<<result;
//  }


 // find target in 2d matrix if you find then return 1 else 0;

 int targetin2d(int arr[3][4],int low,int high,int target){
    int mid;
while(low<=high){
    mid = low + (high-low)/2;
    int row;
    int col;
    int m = 4;
    row = mid /m;
    col = mid % m;

    if(arr[row][col]==target){
       return 1;
    }
   else if(arr[row][col] < target){
low = mid +1;
    } else {
        high = mid -1;
    }
}
return 0;
 }

 int main (){
int arr [3][4]={ {1 , 3, 5, 7},
               {10,11,16,20},
               {23,30,34,60}
};

int p =12;

int target;
cout<<"enter target: ";
cin>>target;
int result ;
int low = 0;
int high = p-1;

result = targetin2d(arr,low,high,target);
cout<<result;
 }