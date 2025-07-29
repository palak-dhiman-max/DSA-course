#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;


int main (){

//    // create file and open

//     ofstream fout;
//     fout.open("sorting.txt");

//     // write data
//     int n;
//     cout<<"enter size:";
//     cin>>n;
//     int arr[n];

//     cout<<"enter elements of array:";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     fout<<"Elements before sorting :";
//     for(int i=0; i<n; i++){
//         fout<<arr[i]<<" ";
//     };



//     fout.close();



    //reading file

    ifstream fin;
    fin.open("sorting.txt");

    string value;
   


 while(getline(fin,value)){
    cout<<value<<" ";
    
 };
    fin.close();



 

}