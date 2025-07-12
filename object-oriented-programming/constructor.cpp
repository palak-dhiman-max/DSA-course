 #include <iostream>
 using namespace std;


class customer
{
    string name;
    int account_no;
    int balance;


    public:
    // default constructor
    customer(){
cout<<"hello I am constructor"<<endl;
name="rohit";
account_no=294747;
balance=3929;
    }

    // parameterised constructor by help of which we can indvidually initialise the value to obj

    // customer(string n,int m, int p){
    //     name=n;
    //     account_no=m;
    //     balance=p;

    // }


    // agar hum attribute ke namm par hi constructor ke parameter likhe to vo confuse ho jayega
    //isliye this pointer ka use kiya
    
    // customer(string name,int account_no,int balance){
    //    this-> name=name;
    //    this-> account_no=account_no;
    //    this-> balance=balance;
    // }

    customer(string s,int t){
        name=s;
        account_no = t;
    }

    void display(){
        cout<<name<<" "<<account_no<<" "<<balance<<endl;
    }

    // inline constructor

    inline customer(string a,int b,int c ):name(a),account_no(b),balance(c){

    }
    // jab function same hota hai aur parameter alaga hote hai to use function overloading 
    //kahte hai to hum constructor overloading kahenge kuki hamne uper ek hi naam ke kai function
    //banaye hai par parameter alag hai .

};


int main (){
    customer a;
    customer a1("palak", 323424,122222);
    customer a2("raghu",23);
    a.display();
       a1.display();
      a2.display();
}


// copy constructor

class student{

    public:
    string name;
    int roll_no;
    int age;


    student(string a, int s, int d){
        name = a;
        roll_no=s;
        age=d;
    }


    student(student &p) {
name = p.name;
roll_no= p.roll_no;
age = p.age;
    }


    void display(){
        cout<<name<<" "<<roll_no<<" "<<age<<endl;
    }


};

int main (){
student s1("palak",13324,19);
student s2(s1);
s1.display();
s2.display();
//another syntax to copy it is assignment operator;
student s3("tarun",3435,19);
s3 = s1;
s3.display();
}



