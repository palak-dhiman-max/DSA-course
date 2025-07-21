#include <iostream>
#include<exception>
#include<new>
using namespace std;
//let us undesrstand this with help of an example

// class Customer{
// int balance,accountno;
// string name;

// public:

// // initialising all the values by constructor
// Customer(string name,int balance,int accountno){
//     this->name=name;
//     this->accountno=accountno;
//     this->balance=balance;
// }

// // for depositing amount in bank
// void deposit(int amount){
//     if(amount>0){
// balance+=amount;
// cout<<amount<<" rs."<<" is credited successfully";

// }
// else{
//     throw"invalid please enter a valid amount1";
// }
// }

// // for withdrawing the amount

// void withdraw(int amount){

//     if(amount>0 &&amount<balance){
//     balance-=amount;
//     cout<<amount<<"rs. "<<" is debited successfully";
// }

// else if (amount<0){
//     throw "invalid please enter a valid amount";
// }

// else{
//     throw "your balance is low";
//     // if we came in this condition so due to throw function termiate and didnit read whatever 
//     // is written below and it find the cathe
// }


// }

// void display(){
//     cout<<"current balance is:"<<balance;
// }


// };


// int main (){
//     Customer c1("palak",5000,11111);

//     // try block me hum sirf ek exception ko hi handle kar sakte hai agar koi aur exception hogi
//     // us try block me to hum usko handle nahi kar payege agar chhte ho karna to alag alag try 
//     // catach block bana lo
//   try{ 
//      c1.deposit(-500);
  
//   }
   
//     catch(const char *a){
//     cout<<"exception occured :"<<a;
//   }


// cout<<endl;
// try{
//       c1.withdraw(6200);
// }

// catch (const char *e){
//     cout<<"Exception occured: "<<e;
// }
//     cout<<endl;
//     c1.display();
// }


// another example

// int main (){
//     int a,b;
//     cin>>a>>b;

//     try{
//         if(b==0){
//             throw "divion by zero is not possible:";
//         }
//     }

//     catch(const char *e){
//         cout<<"exception occured:"<<e;
//     }
// }

// understanding why we use try ,catch ,throw instead of if else because by using if else we can
// handle the exceptions as well

// we can't perform exception handling over here because my compiler give a compile time erro
// not runtime it detect at compile time initially that size is very large but i have tried it 
// on online compiler and it works there

int main(){
    // dynamicaaly allocation 
    // int *p = new int[10000000000000];
    // but it will throw an exception because size of array is very large and we cant handle it with if else
    // so we use try,catch,throw
try{
 int *p = new int[100000000];
 delete []p;
}

catch(const exception &e){
    cout<<"exception occured at line 115: "<<"type of exception: "<<e.what();
 }
 }