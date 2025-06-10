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


 void quicksort(int arr[],int low, int high,int k){
    int partition;
    if(low<high){
        partition = pivot(arr,low,high);
        if(partition==k-1){
            cout<<"smallest element is : "<<arr[partition];

        }
      quicksort(arr,low,partition-1,k);
         quicksort(arr,partition+1,high,k);

    }
}
 int main (){
    int k;
    cout<<"enter kth element: ";
    cin>>k;
    int n;
    int low = 0;
    
    cout<<"enter size of array :";
    cin>>n;
int high = n-1;
int arr[n];
for(int i=0; i<n;i++){
    cin>>arr[i];
}

quicksort(arr,low,high,k);


 }