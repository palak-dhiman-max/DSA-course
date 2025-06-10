 # include<iostream>
 using namespace std;

 void merge(int arr[],int low, int mid, int high,int n){
    int right = mid +1;
    int left =low;
    int k=0;
int temp[n];
// logi of merging
 while(left<=mid && right<=high){
    if(arr[left]<=arr[right]){
temp[k]=arr[left];
k++;
left++;
    }
    else{
        temp[k]=arr[right];
        k++;
        right++;
    }
 }

 // in case if array is exhausted
 while(left<=mid){
    temp[k]=arr[left];
k++;
left++;
 }

 while(right<=high){
    temp[k]=arr[right];
k++;
right++;
 }


 //copy data of temp into array
 
 for(int i=low; i<=high; i++){
    arr[i]=temp[i-low];
 
 }
 
 
 }



void mergesort(int arr[],int low,int high,int n){
    int mid=(low+high)/2;
  
    //base case 
    if(low>=high){
        return;
    }
    // sort half part of array
    mergesort(arr,low,mid,n);
    // sort another part of array
    mergesort(arr,mid+1, high,n);

    // merging them
   merge(arr,low,mid,high,n);

}

 int main (){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int low =0;
    int high=n-1;
    int arr[n];
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    mergesort(arr,low,high,n);
    
    for(int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
 }