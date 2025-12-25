 #include<iostream>
 #include<stack>
 using namespace std;

 int main (){

    stack<int>s;
    s.push(7);
    s.push(4);
      s.push(3);
    s.push(1);
      s.push(6);
    s.push(9);
      s.push(10);
    s.push(4);

    cout<<s.size()<<endl;

    s.pop();
     s.pop();
     s.pop();
     s.pop();
      s.pop();
      
    cout<<s.size()<<endl;

    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
 }