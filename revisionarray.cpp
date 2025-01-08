# include<iostream>
# include <algorithm>
using namespace std;
int main (){
    // given tow vector arr1[] and arr2[]of size m and n sorted in increasing order.
    // merge the tow arrays into a single sorted array of size m+n
 /*  int m;
    int n;
    cout<<"enter size of vector m:"<<endl;
    cin>>m;
      cout<<"enter size of vector n::"<<endl;
    cin>>n;
vector <int> arr1(m);
vector <int> arr2(n);
cout<<"enter vector elements of arr1:"<<endl;
for(int i=0; i<m;i++){
    cin>>arr1[i];
}
cout<<"enter vector elements of arr2:"<<endl;
for(int i=0; i<n;i++){
    cin>>arr2[i];
}

vector<int> result(m+n);
int i =0;
int j=0;
int k=0;
while(i<m && j<n){
    if(arr1[i]<arr2[j]){
        result[k]=arr1[i];
        i++;
        k++;
    }else{
        result[k]=arr2[j];
        j++;
        k++;
    }
}
while(i<m){
    result[k]=arr1[i];
    k++;
    i++;
}
while(j<n){
    result[k]=arr2[j];
    k++;
    j++;
}
for(int i=0; i<m+n;i++){
    cout<<result[i]<<" ";
}
// check no of pairs whose absolute difference is equal to given number

int arr  []= {1,2,4,1};
int x;
int n=4;
cin>>x;

bool pair= false;
for (int i=0; i<n;i++){
for(int j =i+1;j<n;j++){
    if(abs(arr[i] - arr[j])==x){
        pair = true;
    }
}
}cout<<" yes:"<<pair<<endl;


// move all zeros at end of array

 int arr []= {1,3,5,0,8,0,4,0,4};
 int i =0; 
 
 int j = 8;
 while (i<j){
     if(arr[i]==0 && arr[j]!= 0){
         swap(arr[i],arr[j]);
         i++;
         j--;
     }else if(arr[i]!=0){
        i++;
     }else{
        j--;
     }
 }
 for(int i = 0; i <9 ;  i ++){
     cout<<arr[i]<<" "; 
     }
*/
// reverse an array
int arr [] ={1,2,3,5,6,7,9,10,56,78};
//7,6,5,3,2,1
int n= 10;
int i=0 ;
int j= n-1;
while(i<j){
    swap(arr[i],arr[j]);
    i++;
    j--;
}

for(int k=0; k<n;k++){
    cout<<arr[k]<<" ";
}
}