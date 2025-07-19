// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// using badalloc it also works same
int main() {
    try{
int *p = new int[1000000000000000000];
delete []p; 
        
    }
    
    catch (const bad_alloc &e){
        cout<<"exception occured at line 6:"<<e.what();
    }
}


// runtime error class


class Customer{
int balance,accountno;
string name;

public:

// initialising all the values by constructor
Customer(string name,int balance,int accountno){
    this->name=name;
    this->accountno=accountno;
    this->balance=balance;
}

// for depositing amount in bank
void deposit(int amount){
    if(amount>0){
balance+=amount;
cout<<amount<<" rs."<<" is credited successfully";

}
else{
    throw runtime_error("invalid please enter a valid amount1");
}
}

// for withdrawing the amount

void withdraw(int amount){

    if(amount>0 &&amount<balance){
    balance-=amount;
    cout<<amount<<"rs. "<<" is debited successfully";
}

else if (amount<0){
    throw runtime_error("invalid please enter a valid amount");
}

else{
    throw "your balance is low";

}


}

void display(){
    cout<<"current balance is:"<<balance;
}


};


int main (){
    Customer c1("palak",5000,11111);
      c1.display();
      cout<<endl;

  try{ 
     c1.deposit(-500);
  
  }
  
   
    catch(const runtime_error &a){
    cout<<"exception occured at line 82:"<<a.what();
  }

}


// making our own exception class

    class invalidamount:public runtime_error{
        public:
        invalidamount( const string &msg):runtime_error(msg){
            
        };
    };
        class lowbalance:public runtime_error{
            public:
        lowbalance( const string &msg):runtime_error(msg){
            
        };
    };
class Customer{
int balance,accountno;
string name;

public:

// initialising all the values by constructor
Customer(string name,int balance,int accountno){
    this->name=name;
    this->accountno=accountno;
    this->balance=balance;
}

// for depositing amount in bank
void deposit(int amount){
    if(amount>0){
balance+=amount;
cout<<amount<<" rs."<<" is credited successfully";
cout<<endl;

}
else{
    throw invalidamount("invalid please enter a valid amount1");
}
}

// for withdrawing the amount

void withdraw(int amount){

    if(amount>0 &&amount<balance){
    balance-=amount;
    cout<<amount<<"rs. "<<" is debited successfully";
    cout<<endl;
}

else if (amount<0){
    throw invalidamount("invalid please enter a valid amount");
}

else{
    throw  lowbalance("your balance is low");

}


}

void display(){
    cout<<"current balance is:"<<balance;
}


};


int main (){
    Customer c1("palak",5000,11111);
 

  try{ 
     c1.deposit(500);
  c1.withdraw(60000);
  }


    catch(const invalidamount &a){
    cout<<"exception occured at line 169:"<<a.what();
  }
  
      catch(const lowbalance &e){
    cout<<"exception occured at line 170:"<<e.what();
  }
    cout<<endl;
         c1.display();
    

}