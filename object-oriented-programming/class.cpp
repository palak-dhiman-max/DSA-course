 #include <iostream>
using namespace std;

// class student
// {
//     public:
//     string name ;
//     int rollno , age;
//     string grade;
// };

// int main (){
//     student s1;
//     s1.name="rohit";
// s1.age=12;
// s1.rollno=1234;
// s1.grade="A++";

// cout<< " "<<s1.name<<" "<<s1.age<<" "<<s1.rollno<<" " <<s1.grade<<endl;

//     student s2;
//     s2.name="mohit";
// s2.age=15;
// s2.rollno=45674;
// s2.grade="A";

// cout<< " "<<s2.name<<" "<<s2.age<<" "<<s2.rollno<<" " <<s2.grade<<endl;

// }

// using functions privately acecssing atributes

// class student
// {

// private:

// // attributes
//     string name;
//     int rollno;
//     int age;
//     string grade;

// public:

// // setting values  setter function
//     void setname(string s)
//     {
//       name  =  s ;
//       // we can directly print here as well
//       cout<<name;
//     }

//     void setage(int a)
//     {
//        age= a ;
//     }

//     void setrollno(int r)
//     {
//        rollno= r;
//     }

//     void setgrade(string x)
//     {
//         grade=x ;
//     }


//     // getter function

//     // void getname(){
//     //     cout<<name;
//     // }
// };


// int main (){
// student s1;
// s1.setage(24);
// s1.setgrade("A++");
// s1.setname("palak");
// s1.setrollno(2324231);
// // s1.getname();


// }


// now we didn't make function void we just return and then print in main function
// class student
// {
//     private:
//      string name;
//     int rollno;
//     int age;
//     string grade;


//     public:

//     string setname(string s){

//         if(s.size()==0){
//             return "invalid ";
//         }
//         name =s;
//         return name;
//     }

//     string setgrade(string g){
    
//             grade = g;
//             return grade;
        
        
//     }
// };

// int main (){
//     student s1;
//     cout<<s1.setname("")<<endl;
//     cout<<s1.setgrade("A");
// }


// we will print the grade only when it is equal to the pin

// class student{
//     private:
//     string grade;


//     public:

//     void setgrade(string s){
//         grade=s;
//     }


// string getgrade(int pin){
//     if(pin==123){
//     return grade;
// }

//     return"invalid";
// }
// };

// int main (){
//     student s1;
//     s1.setgrade("A++");
//     cout<<s1.getgrade(1223);

// }

// padding concept

// class student{

// char c;
// int a;
// char b;


// };


// int main(){
// student s1;
// cout<<sizeof(s1);
// }



//  dynamic allocation

class student {
    public:
    string name;
    int rollno;
    int age;
};

int main (){

    //making a pointer such that it take dynamic memory
    student *s1= new student;
(*s1).name ="palak";
(*s1).rollno =11242362;
(*s1).age=19;

cout<<(*s1).name <<endl;
cout<<s1->rollno <<endl;
cout<<s1->age <<endl;

}