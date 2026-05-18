#include<iostream>
#include<queue>
using namespace std;

int main (){


    queue<int>q;
    q.push(9);
    q.push(8);
    q.push(1);
    q.push(2);
    q.push(3);
   
//     while(!q.empty()){

//         cout<<q.front()<<" ";
//         q.pop();
//     }


//print all elemnt from queue without removing them from queue

int n = q.size();
while(n--){
    
     q.push(q.front());
     cout<<q.front()<<" ";
     q.pop();}

 }



