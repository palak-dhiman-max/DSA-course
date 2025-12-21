#include<iostream>
using namespace std;

void selectionsort(int arr[],int i,int j,int size, int min){

    if(i==size-1){
        return;
    }

if(j==size){
    if(min!=i){
      swap(arr[i],arr[min]);
    }

    return selectionsort(arr,i+1,i+2,size,i+1);
}


if(arr[j]<arr[min]){
   min = j;
}

return selectionsort(arr,i,j+1,size,min);

}
int main (){
    int arr[] ={9,1,8,0,3};
    int n= 5;

    selectionsort(arr,0,1,n,0);

    for(int i=0; i<5;i++){
        cout<<arr[i]<<" ";
    }

    
}