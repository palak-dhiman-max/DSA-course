
#include<iostream>
using namespace std;

int sum(int arr[][3],int i, int j,int n,int m){

    if(i==m-1 && j==n-1 ){
        return arr[i][j];
    }

    if(j==n){
        j=0;
        i++;
    }


    return arr[i][j] + sum(arr,i,j+1,n,m);
}


int main (){

    int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n,m;
    n=3;
    m= 3;
    int sum1 = sum(arr,0,0,n,m);
    cout<<sum1;
}