 # include <iostream>
 # include <algorithm>
 using namespace std;

 int pivot (int arr[],int low,int high){
    int i =low;
    int j= high;
    int pivot1 = arr[low];
    while(i<=j){
        if(arr[i]>pivot1 && arr[j]<=pivot1){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i]<=pivot1){
            i++;
        }
        else if(arr[j]>pivot1){
            j--;
        }
    } swap(arr[low],arr[j]);
    return j;
 }


 void quicksort(int arr[],int low, int high){
    int partition;
    if(low<high){
        partition = pivot(arr,low,high);
        quicksort(arr,low,partition-1);
         quicksort(arr,partition+1,high);

    }
}
 int main (){
    int n;
    int low = 0;
    
    cout<<"enter size of array :";
    cin>>n;
int high = n-1;
int arr[n];
for(int i=0; i<n;i++){
    cin>>arr[i];
}

quicksort(arr,low,high);

for(int i=0; i<n;i++){
    cout<<arr[i]<<" ";
}

 }