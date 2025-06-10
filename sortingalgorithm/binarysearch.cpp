 # include <iostream>
 using namespace std;

int binarysearch(int arr[],int low,int high,int mid,int target){
mid = low+high /2;
while(low<=high){
if(target==arr[mid]){
    return mid;
}
else if(target>arr[mid]){
    low = mid +1;
}
else {
    high=mid -1;
}

return -1;
}
}


 int main(){
int n;
cout<<"enter size of array :";
cin>>n;
int target;
cout<<"enter target :";
cin>>target;
cout<<"enter elemnts in array:";
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
int result;
int low=0;
int high = n-1;
int mid;
result=binarysearch(arr,low,high,mid,target);
cout<<"target is at index: "<<result;
 }