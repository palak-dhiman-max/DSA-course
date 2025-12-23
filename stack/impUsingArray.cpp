#include <iostream>
using namespace std;

// implementation of stack using array

class Stack
{

    int *arr;
    int size;
    int top;

public:

bool flag;
    // constructor to initialise values
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
        flag = 1; //empty 
    }

    // function push

    void push(int value)
    {

        // checking for overflow
        if (top == size - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        else
        {
            top++;
            arr[top] = value;
            cout << "Pushed " << arr[top] << " into top of stack succesfully" << endl;
            flag =0; //filled
        }
    }

    // function pop
    void pop()
    {

        // checking for uunderflow
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }

        else
        {

            cout << "Poped " << arr[top] << " from top of stack succesfully" << endl;
            top--;

            //handling neagative no
            if(top==-1){
            flag =1;
            }
        }
    }

    // function peek

    int peek()
    {

        if (top == -1)
        {
            cout << "Stack is empty"<<endl;
            return -1;
        }

        else
        {
            return arr[top];
        }
    }

    // function issize

    int issize()
    {
        return top + 1;
    }

    // function isempty

    bool isempty()
    {

        return top == -1;
    }
};

int main()
{
    Stack s(5);

    // performing push operation
    s.push(2);
    s.push(5);
    s.push(4);
    s.push(1);

    // performing pop operation
    s.pop();
    s.pop();

    // finding peek
    cout << s.peek() << endl;

    // finding size
    cout << s.issize() << endl;

    // finding empty or not
    cout << s.isempty() << endl;

    // checking for underflow
    s.pop();
    s.pop();
    s.pop();
    cout << s.isempty() << endl;
    cout<<s.peek()<<endl;

    // checking for overflow and handling neagtive no
    s.push(12);
    s.push(-4);
    s.push(3);
    s.push(-2);
    s.push(6);
   

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    // s.push(-1);
    int value = s.peek();

//     if(s.flag==0){
//         cout<<value<<endl;
//     }

   
 //another approach
     if(s.isempty()==0){
         cout<<value<<endl;
     }



}