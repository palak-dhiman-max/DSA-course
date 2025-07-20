#include <iostream>
#include <fstream>
#include<algorithm>
# include<vector>
using namespace std;

int main (){

    // writting in  file

    // ofstream fout;
    // fout.open("zepto.txt");

    // fout<<"HELLO INDIA WELCOME TO MY WORLD";

    // fout.close();


    // reading file

    ifstream fin;
    fin.open("zepto.txt");
    char c;
    c=fin.get();

    while(!fin.eof()){
cout<<c;
c=fin.get();
    };

    fin.close();


//     apply sort on file data and then 

//    take input data
// ofstream fout;
// fout.open("zepto.txt");

//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0; i<arr.size(); i++){
//         cin>>arr[i];
//     }

// fout<<"Data before sorting :";
// for(int i=0; i<arr.size(); i++){
//     fout<<arr[i]<<" ";
// }
// //sort it

// sort(arr.begin(),arr.end());
    
// // open file
    

//     fout<<endl;
//     fout<<"Data after sorting :";

//     for (int i=0; i<arr.size(); i++){
//         fout<<arr[i]<<" ";
//     };

//     fout.close();

  
//     // read file

//     ofstream fout;
//     fout.open("zepto.txt");

//     fout<<"hello world \n";

//     fout<<"hello bhai \n";
  
//     fout<<"hello sister \n";

//     fout.close();

//     ifstream fin;
//     fin.open("zepto.txt");
//     string line;

//     while(getline(fin,line)){
//         cout<<line<<endl;
//     };

//     fin.close();



}