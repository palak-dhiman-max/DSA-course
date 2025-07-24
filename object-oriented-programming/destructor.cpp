#include <iostream>
using namespace std;

// class customer{

 
//     string name;
//     int *balance;
//    public:
//     customer(string a,int bal){
//     name = a;
//     balance = new int;
//     *balance = bal;

// cout<<"constructor has been called"<<endl;

//     }

//     ~customer(){
//         delete balance;
//         cout<<"destructor has been called";
      
//     }

 

// };

// int main ()
// {
// customer a1("palak",2000);

// }


// order of destruction called is reverse as that of constructor called

class student{

    public:
    string name;
    int * data;

    student(){
        name="4";
        cout<<"constructor has been called "<<name<<endl;
    }

    student(string name){
this->name = name;
 cout<<"constructor has been called"<<" "<<name<<endl;
    }

    ~student(){
        delete data;
        cout<<"destructor has been called"<<" "<<name<<endl;
    }

};

int main (){
    student s1("1"),s2("2"),s3("3");
    student *s4 = new student;
 delete s4;
}




