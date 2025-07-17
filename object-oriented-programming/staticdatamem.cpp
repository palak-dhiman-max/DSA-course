#include <iostream>
using namespace std;

// class customer
// {
//     string name;
//     int account_no, balance;

//     //  static data member
//     static int total_customer;

// public:

// // in order to acess this member through class
// //  static int total_customer;

//     customer(string name, int account_no, int balance)
//     {
//         this->name = name;
//         this->account_no = account_no;
//         this->balance = balance;
//         total_customer++;
//     }

//     void display()
//     {
//         cout << name << " " << account_no << " " << balance << endl;
//     }

//     void displaycount()
//     {
//         cout << total_customer;
//     }
// };

// // initialsation of satatic data member
// int customer::total_customer = 0;

// int main()
// {
//     customer s1("palak", 123131, 1000);
//     customer s2("sita", 122321, 2000);
//     customer s3("sita", 122321, 2000);
//     // s2.displaycount();
//     // cout<<endl;
//     customer s4("sita", 122321, 2000);
//     customer s5("sita", 122321, 2000);

//     // customer :: total_customer=10;
//     s2.displaycount();

// }

//  agar hum calass se access karna chchte hai na ki object se static member function inka use hum isliye karte hai kuki agar hum static member ko acess
// karna chhte hai to hume use public me likhna padega private karne pe error milega to isliye
// hum function likhenge

// class customer
// {
//     string name;
//     int account_no, balance;

//     //static data member
//     static int total_customer;

// public:

//     customer(string name, int account_no, int balance)
//     {
//         this->name = name;
//         this->account_no = account_no;
//         this->balance = balance;
//         total_customer++;
//     }

//     void display()
//     {
//         cout << name << " " << account_no << " " << balance << endl;
//     }

//     void displaycount()
//     {
//         cout << total_customer;
//     }

//     // static member function
//     static void accesscount(){
//         cout<<total_customer;
//     }

// };

// // initialsation of satatic data member
// int customer::total_customer = 0;

// int main()
// {
//     customer s1("palak", 123131, 1000);
//     customer s2("sita", 122321, 2000);
//     customer s3("sita", 122321, 2000);
//     customer s4("sita", 122321, 2000);
//     customer s5("sita", 122321, 2000);
//     customer::accesscount();

// }

// write a customer class and tell the no of customer ,total balance in bank and amount deposit or withdar

class customer
{
    string name;
    int account_no, balance;
    static int total_customer;
    static int total_balance;

public:
    customer(string name, int account_no, int balance)
    {
        this->name = name;
        this->account_no = account_no;
        this->balance = balance;
        total_customer++;
        total_balance += balance;
    }

    void deposit(int amount){
        
        if(amount>0){
            balance+=amount;
            total_balance+=amount;
        }
    }


        void withdraw(int amount2){
        
        if(amount2>0 && amount2<=balance){
            balance-=amount2;
            total_balance-=amount2;
        }
    }

    static void accessdata(){
        cout<<"total customer in bank :"<<total_customer<<endl;
        cout<<"total balance :"<<total_balance;
    }
};

int customer:: total_customer=0;
int customer:: total_balance=0;


int main()
{
    customer s1("palak", 87868, 4500);
    customer s2("sita", 76768, 1000);
    customer s3("gita", 17868, 2000);
    customer s4("taruna", 18868, 6000);
    //acess through class
    s2.deposit(500);
    s3.withdraw(600);
    customer ::accessdata();
}