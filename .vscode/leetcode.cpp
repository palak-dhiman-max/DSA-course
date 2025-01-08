# include <iostream>
# include<vector>
using namespace std;
/*int main(){
// given an array consisting of os and 1s and 2s sort them in ascending order
int n;

cout<<"enter size of array :";
cin>>n;
int arr [n];
// taking array elements input
for(int i=0; i<n;i++){
    cin>>arr[i];
}

// logic to sort array by three pointer approcah
int left=0; 
int right = n-1;
int mid = 0;
while(mid<=right){
    if(arr[mid]==0){
swap(arr[left],arr[mid]);
mid++;
left++;
    }else if (arr[mid]==1){
        mid++;
    }else{
        swap(arr[right],arr[mid]);
        right--;
    }
}
// printing sorted array
for(int i=0; i<n;i++){
    cout<<arr[i]<<" ";
}}
/*
// find missing number from array
int n;

cout<<"enter size of array :";
cin>>n;
int arr [n];
// taking array elements input
for(int i=0; i<n-1;i++){
    cin>>arr[i];
}
// sum of n numbers
int expected_sum= n*(n+1)/2;

int elements_sum =0;
for(int i=0; i<n-1;i++){
    elements_sum+=arr[i];
}

int missing_number= expected_sum-elements_sum;
cout<<"mising number is equal to:"<<missing_number;*/

// move all the zeros at the end and remain the sequence of all the elements
int main(){
int n;
cin>>n;
vector<int>nums(n);
for(int i=0; i<n;i++){
    cin>>nums[i];
}
        int right = 0;
        int left = 0;
        while(right<nums.size()){
            if(nums[left]==0 && nums[right]==0){
                
                right++;
                
            }else if(nums[left]==0 &&nums[right]!=0){
                swap(nums[left],nums[right]);
                left++;
                    right ++;}
                    
}
for(int i=0; i<n;i++){
    cout<<nums[i]<<" ";
}
}

//Given two integer arrays nums1 and nums2, return an array of their intersection. 
//Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.
/*int n ,m;
cin>>n>>m;
int k=0;
vector<int>arr1(n);
vector<int>arr2(m);
vector<int>arr3(n);
for(int i=0; i<n;i++){
    cin>>arr1[i];
}
for(int i=0; i<m;i++){
    cin>>arr2[i];
}
for(int i=0; i<n;i++){
    for(int j=0; j<m;j++){
    if(arr1[i]== arr2[j]){
        arr3[k]= arr1[i];
        k++;
    }
}
}
for(int i=0; i<n;i++){
    cout<<arr3[i]<<" ";
}
}*/