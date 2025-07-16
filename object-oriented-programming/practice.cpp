#include <iostream>
using namespace std;
// problem one
// make a bank customer class

class bank_customer
{
private:
string name;
int accountNumber;
double accountBalance;
bool isActive;



public:

void setname (string n){
    name=n;
}
string getname(){
    return name;
}
 void deposit_amount(double amount){
    
        accountBalance =accountBalance + amount;

}

void setaccountno(int num){
    accountNumber = num;
}

void withdraw(double amountwithdraw){
    accountBalance = accountBalance-amountwithdraw;
    
}

    double getbalance(){
      return accountBalance;
    }

    void isactive(bool n){
        isActive = n;
    }
    void getactive(){
        cout<<isActive;
    }





};


int main(){
bank_customer customer1;

// setting all the values
cout<<"enter name of customer: "<<endl;
string name;
cin>>name;
customer1.setname(name);

cout<<"enter account number of customer: "<<endl;
int num;
cin>>num;
customer1.setaccountno(num);

cout<<"depositted amount by customer: "<<endl;
double amount;
cin>>amount;
customer1.deposit_amount(amount);
cout<<"amount withdrawn by customer: "<<endl;
double amwithdrawn;
cin>>amwithdrawn;
customer1.withdraw(amwithdrawn);
cout<<"account is active or not: ";
customer1.isactive(true);
customer1.getactive();
cout<<endl;

cout<<"current balance of customer: "<<endl;
//getting balance
cout<<customer1.getbalance();

cout<<endl;
//another customer
bank_customer customer2;
cout<<"enter name of customer: "<<endl;
string name1;
cin>>name1;
customer2.setname(name1);

cout<<"enter account number of customer: "<<endl;
int num1;
cin>>num1;
customer2.setaccountno(num1);

cout<<"depositted amount by customer: "<<endl;
double amount1;
cin>>amount1;
customer2.deposit_amount(amount1);
cout<<"amount withdrawn by customer: "<<endl;
double amwithdrawn1;
cin>>amwithdrawn1;
customer2.withdraw(amwithdrawn1);
cout<<"account is active or not ";
customer2.isactive(true);
customer2.getactive();
cout<<endl;
cout<<"current balance of customer: "<<endl;
//getting balance
cout<<customer2.getbalance();
cout<<endl;
// for transaction
cout<<"enter transaction value :"<<endl;
double transaction;
cin>>transaction;

cout<<"from which customer account you have to transfer enter his name:";
string n ;
cin>>n;
double result, result1;
result = customer1.getbalance();
result1=customer2.getbalance();
string name4,name3;
name4 =customer1.getname();
name3=customer2.getname();

if(name4==n){
    result-=transaction;
    result1+=transaction;
}
else if(name3==n){
    result1-=transaction;
    result+=transaction;
}

cout<<"current balance of "<<" "<<name4 <<" "<<result<<endl;

cout<<"current balance of "<<" "<<name3 <<" "<<result1<<endl;


}




