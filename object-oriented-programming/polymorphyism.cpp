#include<iostream>
#include<vector>
using namespace std;

// perform function overloding and cal area of circle and rect.

// class area{

//     public:


//     float area1(float r){
// return 3.14*r*r;
//     }

//     float area1(int l,int b){
//         return l*b;
//     }


// };

// int  main (){
// area a;
// cout<<a.area1(2.5);
// cout<<endl;
// cout<<a.area1(40,50);

// }


// add tow complex number using operator overloading

// class complex{

//     int real;
//     int img;
//     public:

//     complex(){
//         //default cons for ans
//     }

//     complex(int real,int img){
//         this->real=real;
//         this->img=img;
//     }

//     void display(){
//         cout<<real<<"+"<<img <<"i"<<endl;
//     }

//     complex operator +(complex &c){
//         complex ans;
//         ans.real = real + c.real;
//         ans.img = img + c.img;
//         return ans;
//     }

// };

// int main (){
//     complex c1(10,4);
//     complex c2(5,2);
//     complex c3 = c1+c2;
//     c3.display();
// }


// runtime polymorphysum (function overriding )and virtual function

class Animal{
    public :

    // using virtual kuki hum chhate hain ki compile time pe decide na ho ki kis konse speak 
    // ko call karna hai ,virtual likhne se runtime pe decide hoga kuki runtime me p ke andar 
    // dog calss ka adress store ho jayega isle bark print hoga. 

 virtual  void speak (){
        cout<<"huhu";
    }

};
 
class dog :public Animal{
    public:
    void speak(){
        cout<<"bark";
    }
};

class cat :public Animal{
    public:
    void speak(){
        cout<<"meow";
    }
};

int main (){
    Animal *p;
    p=new dog(); // make object of child class and store its address in p and allocate it dynamically
    // p->speak();


}


    vector<Animal*>elements;
    elements.push_back(new dog());
    elements.push_back(new Animal());
    elements.push_back(new cat());

      for(int i=0; i<elements.size();i++){
        p = elements[i];
        p->speak();
        cout<<endl;

      }