# include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main (){

//Target sum problem 
// question - find the total number of pair in the array whose sum is equal to given value of x
int arr  []= {1,4,1,0,2};
int x;
//cout<<"Enter your number:"<<endl;
//cin>>x;

int count = 0;
for (int i=0; i<5;i++){
for(int j =i+1;j<5;j++){
    if(arr[i]+arr[j]==x){
        count++;
    }
}
}//cout<<"total pairs is equal to:"<<count<<endl;

// count the number of triplets in array whose sum is equal to a given number

int arr1 [] = {3,1,2,4,0,6};
int target_sum ;
//cout<<"enter the target sum:"<<endl;
//cin>>target_sum;
int triplets =0;
int size = 6;
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        for(int k=j+1;k<size;k++){
            if(arr[i]+arr[j]+ arr[k]==target_sum){
                triplets++;
            }
        }
    }
}
cout<<"triplets is equal to: "<<triplets;










//find the unique number in a given array where all elements are being repeated
// twice with one value being unique

int arr2 [] = {1,2,4,2,1,6,7,6,7};
int size1 = 9;

for( int i = 0; i<size1;i++){
    for(int j=i+1;j<size1 ;j++){
        if(arr2[i]==arr2[j]){
            arr2[i]=arr2[j]=-1;
        }
    }
}

    for(int i=0; i<size1;i++){
        if(arr2[i]>0){
            cout<<arr2[i]<<endl;
        }
    }







    //print second largest number from an array
    int arr3 [] ={1,4,8,2,56,8,10,14,56};
    int max = INT8_MIN;
    int second_max = INT8_MIN;
    for(int i=0;i<9;i++){
        if(arr3[i]>max){
            max = arr3[i];
            
        }
    }
for(int i=0;i<9;i++){
        if(arr3[i]>second_max && arr3[i]!=max){
            second_max = arr3[i];
            
        }
    }
    cout<<second_max;

    //rotate the given array 'a' by k steps , where k is non negative .
    // note : k can be greater than n as well  where n is size of array 'a'.
// when we use extra memory space
    int rotate_arr [] = {1,2,3,4,5};
    int ans_arr [5];
    int n= 5;
    int k= 9;
    k= k%n;
    int j=0;
    for(int i=n-k;i<n;i++){
        ans_arr[j++]=rotate_arr[i];
    }

    for(int i=0;i<=k;i++){
        ans_arr[j++]= rotate_arr[i];
    }

    for(int i=0; i<n;i++){
        cout<<ans_arr[i]<<" ";
    }






    // similar question without using extra memory with help of vectors

    vector<int>v(5);
    int n = v.size();
    int k =2;
    k= k%n;
    cout<<"enter vector elements:"<<endl;
    for(int i=0; i<v.size();i++){
        cin>>v[i];
    }

    reverse(v.begin(),v.end()); // 1,2,3,4,5 / 5,4,3,2,1
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
for(int i=0; i<v.size();i++){
    cout<<v[i]<<" ";
}






}

