# include <iostream>
using namespace std;
int main(){

// initialsing an array
 /*int arr [] = {1,5,8,4,5,6};
cout<<arr[0]<<endl;
cout<<arr[1]<<endl;
cout<<arr[2]<<endl;
cout<<arr[3]<<endl;
cout<<arr[4]<<endl;
cout<<arr[5]<<endl;*/

// finding size of array
//int arr1 [] = {1,7,4,2};
//cout<<sizeof(arr1)<<endl;

// finding length of array
//int arr2 [] = {5,6,9,8};
//cout<<sizeof(arr2)/sizeof(arr2[0]);

// traversing array with help of for loop
int arr3 [] = {1,10,45,2};

for(int i =0;i<sizeof(arr3)/sizeof(arr3[0]);i++){

  //  cout<<arr3[i]<<endl;

}
// using for each loop
int arr5 [] = {4,7,1};

for(int element : arr5){
 //   cout<<element<<" ";

}

// using while loop
int array [] = {45,23,69,47};
int index = 0;
while(index<sizeof(array)/sizeof(array[0])){
  //  cout<<array[index]<<endl;
    index++;
}

// taking input using loop
int x [5];
for(int i=0;i<5;i++){
 //   cin>>x[i];
}

// by for each loop
int y[6];
for(int &ram : y){
//cin>>ram;
}


// calculate sum of all the elements present in an array
int sum_arr[] = {4,4,2,4};
int sum = 0;
for(int indx = 0; indx<4;indx++){
    
    sum = sum + sum_arr[indx];
}
cout<<"sum is equal to: "<<sum<<endl;


// find maximum no from array

int max_num_arr [] = {45,7,23,65,21,10};
int max = max_num_arr[0];

for( int i = 1;i<6;i++){
    if(max_num_arr[i]>max){
      max=  max_num_arr[i];
    }
} //cout<<"maximum number is "<<max;

// linear search problem in which you have to find that a given number is present in array or 
//not if it is present then return index otherwise return -1

int key =79;
int ans = -1;
int search [] = {41,32,56,24,42,45,84,79};

for(int i = 0;i<8;i++){
  if(key == search[i]){
    ans = i;
    
  }
} cout<<"index "<<ans<<endl;
 
 // find minimum number from an array
 int min_number_arr [] = {1,89,5,6,3,-1};
 int min = min_number_arr[0];
 
 for(int i=0;i<6;i++){
  if(min_number_arr[i]<min){
    min = min_number_arr[i];
  }
 }cout<<"minimum number is equal to : "<<min<<endl;

// print array in accending order

int arr_in_assending [] = {45,65,7,41,89,56,23,14};
int ans1 ;
for(int i =1; i<8;i++){
  if(arr_in_assending[i]>arr_in_assending[i-1]){
    cout<<arr_in_assending[i-1]<<" ";
  } else{
    cout<<arr_in_assending[i]<<" ";
  }
}




 }