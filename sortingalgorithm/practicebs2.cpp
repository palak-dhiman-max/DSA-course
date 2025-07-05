 # include<iostream>
 using namespace std;

//  // a rotated sorted array is given find the min element return its indx if not present so -1
//  int rotatedsorted(int arr[],int low, int high){
//     int mid;
//     int ans=-1;
// while(low<=high){

//     // we are finding the point from which rotation start that is our min elemnt
//     // terminating condition
//     mid = low+ (high-low)/2;
//     if(arr[mid] >arr[mid+1]){
//         ans = mid+1;
//         return ans;
//     }

//         if(arr[mid] <arr[mid-1]){
//         ans = mid;
//         return ans;
//     }

//     // logic to discard half portion of arrays
//     if(arr[mid] <arr[low]){
// high = mid-1; // went to left side
//     }
//     else{
// low = mid+1;  // went to right side
//     }
// }
// return ans;
//  }
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
// result = rotatedsorted(arr,low,high);
// cout<<"smallest element is at index :"<<result<<" "<<"that is :"<<arr[result];
//  }

// a rotated sorted array is given find the  indx at which target lies  if not present so -1
 
//  int rotatedsortedtarget(int arr[],int low, int high,int target){
//     int mid;
//     int ans=-1;
//     while(low<=high){

//     mid = low + (high-low)/2;
//     // firstly we will check which part of array is sorted then find target lies in which range
// // if mid is greater than low it means it lies in left region


// if (target==arr[mid]){
//     ans = mid;
// }

// if(arr[mid]>arr[low]){


//         if(target>=arr[low] && target<arr[mid]){
// //means target is left side so we discard right isde
// high = mid -1;
// }else{
//     low = mid +1;
// }
// }

// else{
//             if(target>=arr[mid] && target<arr[high]){
// //means target is right side so we discard left isde
// low = mid +1;
// }
// else{
//   high= mid -1;
// }


// }



//  }
// return ans;
 
//  }

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
// int target;
// cout<<"enter target :";
// cin>>target;
// result = rotatedsortedtarget(arr,low,high,target);
// cout<<"target is at index :"<<result;

//  }



 //  a rotateg sorted array is given but duplicates are also present find the target

  int rotatedsortedtarget(int arr[],int low, int high,int target){
    int mid;
    int ans=-1;
    while(low<=high){

    mid = low + (high-low)/2;
    // firstly we will check which part of array is sorted then find target lies in which range
// if mid is greater than low it means it lies in left region


if (target==arr[mid]){
    ans = mid;
}

if(arr[mid]>=arr[low]){


        if(target>=arr[low] && target<arr[mid]){
//means target is left side so we discard right isde
high = mid -1;
}else{
    low = mid +1;
}
}

else{
            if(target>=arr[mid] && target<arr[high]){
//means target is right side so we discard left isde
low = mid +1;
}
else{
  high= mid -1;
}


}

 }
return ans;
 
 }

 int main (){
int n;
cout<<"enter size of array :";
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
int low =0; 
int high=n-1;


int result;
int target;
cout<<"enter target :";
cin>>target;
int result1;
while(arr[low]==arr[high] && low<high){
if(arr[low]== target){
    result1=low;
   
    break;
}

else{
    low++;
    high--;
}

}

  if(arr[low] != arr[high] ) {
    result = rotatedsortedtarget(arr,low,high,target);

cout<<"target is at index :"<<result;}
else{
    cout<<result1;
}


 }



 







  






  



