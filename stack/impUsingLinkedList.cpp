#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;


    node(int value)
    {
        data = value;
        next = NULL;
    }
};

class Stack
{

    int size;
    node *top;

public:
    Stack()
    {
        top = NULL;
        size = 0;
    }

    // push operation

    void push(int value)
    {

        node *temp =new node(value);;
        if (temp == NULL)
        {
            cout << "stack overflow" << endl;
            return;
        }
        else
        {

            temp->next = top;
            top = temp;
            cout<<"pushed succesfully"<<" "<<top->data<<endl;
            size++;
        }
    }
        // pop operation

        void pop()
        {

            if (top == NULL)
            {
                cout << "stack underflow" << endl;
                return;
            }
            else
            {

                node *temp = top;
                 cout<<"poped successfully "<<" "<<top->data<<endl;
                top = top->next;
                delete temp;
               
                size--;
            }
        }
            // find peek

            int peek()
            {
                if (top == NULL)
                {
                    cout << "stack is empty";
                    return -1;
                }
                return top->data;
            }

            // find size

            int issize()
            {
                return size;
            }

            // isempty
            bool isempty()
            {
                return top == NULL;
            }
        };
    
    int main()
    {
        Stack s;

        // push operation
        s.push(5);
        s.push(6);
        s.push(8);
        s.push(1);
        s.push(2);

        // pop operation
        s.pop();
        s.pop();
   
        //peek 
        int value = s.peek();
        if(s.isempty()==0){
            cout<<value<<endl;
        }

        cout<<s.issize();
    }