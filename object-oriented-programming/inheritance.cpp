#include <iostream>
using namespace std;

//parent class
class human{

    private:
    string color,religion;
    public:
    // protected:

    // protected main me access nahi hota par derived class me hota hai to isse data private rehta hai aur inherit bhi ho
    //ho jata hai
    string name;
    int age,weight;
  
};


// child class
class student : private human{
    int fees,rollno;


    public:
    student (string s,int n , int w,int f,int r){
        name = s;
        age =n;
        weight= w;
        fees =f;
        rollno=r;
    }
    

    void display(){
        cout<<name<<" "<<age<<" "<<weight<<" "<<fees<<" "<<rollno<<endl;
    }
};

class teacher:public human{
int salary,id;

};

int main (){
student s1("rohit",24,67,5000,1628671);

teacher t;
t.name="tark";
cout<<t.name<<endl;
s1.display();


}