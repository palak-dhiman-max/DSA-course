#include <iostream>
using namespace std;

// single inheritance

// class human{
//     protected:
//     string name;
//     int age;

//     public:
//     human(string name,int age){
//     this->name =name;
//     this->age=age;
//     cout<<"i am human"<<endl;
//     }

//     void display(){
//         cout<<name<<" "<<age<<endl;
//     }
// };

// class student:public human{
//     int fees,rollno;
// public:

// student(string name,int age,int fees,int rollno) : human(name,age){
  
//     this->fees=fees;
//     this->rollno=rollno;
    
    
//     cout<<"i am student"<<endl;
//   }

// void display(){
//     cout<<name<<" "<<age<<" "<<fees<<" "<<rollno<<endl;
// }

//  };


// int main (){
      
//     student s1("rohit",24,50000,11242362);
  
//      s1.display();
// }



// multilevel inheritance

class person{

    protected:
    string name;

    public:
       void per(){
        cout<<name;
    }
   
 
};

class employee :public person{

    protected:
    int salary;

    public:
    void emp(){
        cout<<salary;
    }


};

class manager:public employee{

    string department;
    public:
    manager(string name,int salary,string department){
        this->name=name;
        this-> salary= salary;
        this->department=department;
        
    }

    // void display(){
    //     cout<<name<<" "<<salary<<" "<<department<<endl;
    // }
};

int main (){
    manager m ("palak",5000,"financial");
// m.display();
m.per();
}



// multiple inheritance

// class engineer{
//     protected:
//     string specialisation;

// };

// class youtuber{
//     protected:
//     int subscribers;
// };

// class codeteacher:public engineer,public youtuber{
//     int salary;
//     public:
//     codeteacher (string specialisation,int subscribers,int salary){
//         this->specialisation=specialisation;
//         this->subscribers=subscribers;
//         this->salary=salary;

//     }

//     void display(){
// cout<<specialisation<<" "<<subscribers<<" "<<salary<<endl;
//     }

// };

// int main (){
//     codeteacher c("ai/ml",132424,5000);
//     c.display();
// }


// hieraarchial inheritanc

// class human{

//     protected:
//     string name;
//     int age;

// };

// class student :public human{
//     int fees;

//     public:
//     student(string name ,int fees,int age){
//         this->name=name;
//         this ->fees = fees;
//         this->age = age;
//     }

//     void displaystdprop(){
// cout<<name<<" "<<fees<<" " <<age;
//     }

// };

// class teacher :public human{
//     int salary;

//     public:
// teacher(string name,int salary,int age){
// this->name=name;
// this->salary=salary;
//       this->age = age;
// }

//     void displaytprop(){
// cout<<name<<" "<<salary<<" " <<age;
//     }
// };

// int main (){
//     teacher t("palak",50000,24);
// t.displaytprop();
// cout<<endl;
// student s("parul",2000,15);
// s.displaystdprop();

// }


// hybrid inheritance

// class student{
// public:
// void stdprint(){
//     cout<<"i am student:"<<endl;
// }
// };

// class male {
// public:
// void maprint(){
//     cout<<"i am male:"<<endl;
// }
// };

// class female{
// public:
// void feprint(){
//     cout<<"i am female:"<<endl;
// }
// };

// class boy :public student , public male{
// public:
// void boprint(){
//     cout<<"i am boy:"<<endl;
// }
// };

// class girl : public student ,public female{
// public:
// void giprint(){
//     cout<<"i am girl:"<<endl;
// }
// };

// int main (){
//     boy b;
//     b.boprint();
//     b.maprint();
//     b.stdprint();
//     cout<<endl;
//     girl g;
//     g.feprint();
//     g.giprint();
//      g.stdprint();

// }


// multipath inheritance

// class human{

//     protected:
//     string name;
//     int age;
// };

// class youtuber:public virtual human{
//     protected:
// int subscribers;
// };

// class engineer:public  virtual human{
//     protected:
// string specialisation;
// };

// class codeteacher : public youtuber,public engineer{
// int salary;
// public :
// codeteacher(string name,int age,int subscribers,string specialisation ,int salary){
//     this->name = name;
//     this -> age= age;
//     this ->subscribers= subscribers;
//     this->specialisation= specialisation;
//     this ->salary= salary;
// }

// void display(){
//     cout<<name<<" "<<age<<" "<<subscribers<<" "<<specialisation<<" "<<salary<<endl;
// }
// };

// int main (){
// codeteacher c("palak",19,5000000,"cse",2000);

// c.display();
// }

