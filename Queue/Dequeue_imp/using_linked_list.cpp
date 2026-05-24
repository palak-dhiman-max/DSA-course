#include <iostream>
using namespace std;


class node {
    public:
   int data;
   node* next;
   node* prev;

   node(int value){
    data = value;
    next = NULL;
    prev = NULL;
   }

};

class dequeue{
    public:
    node* front ;
    node* rear;

    dequeue(){
        front = NULL;
        rear = NULL;
    }

    //push elemnts at front of queue

    void push_front( int x){
          
        if(front==NULL){
            front = new node(x);
            rear = front;
            cout<<front->data <<" "<<"pushed succesfully at front"<<endl;
            return;
        }

        else{
            node *temp = new node(x);
            temp->next =front;
            front->prev = temp;
            front = temp;
            cout<<front->data <<" "<<"pushed succesfully at front"<<endl;

        }

    }


        //push elemnts at back of queue

    void push_back( int x){
          
        if(front==NULL){
            rear = new node(x);
          front=rear;
         cout<<rear->data <<" "<<"pushed succesfully at back"<<endl;
            return;
        }

        else{
            node *temp = new node(x);
            rear->next =temp;
            temp->prev = rear;
            rear = temp;
            cout<<rear->data <<" "<<"pushed succesfully at back"<<endl;

        }

    }


    //pop elemnts from front

    void pop_front(){
        if(front==NULL){
            cout<<"underflow"<<endl;
        }

        else{
            node *temp = front;
            front = front->next;
            cout<< temp->data<< " "<<"poped succesfully from front"<<endl;
            delete temp;

            if(front){
                front->prev = NULL;
            }
            else{
                rear = NULL;
            }
        }
    }

    
    //pop elemnts from back

    void pop_back(){
        if(front==NULL){
            cout<<"underflow"<<endl;
        }

        else{
            node *temp = rear;
            rear = rear->prev;
             cout<< temp->data<<" "<<"poped succesfully from back"<<endl;
            delete temp;
            
            if(rear){
                rear->next= NULL;
            }
            else{
                front = NULL;
            }
        }
    }

    //find start elemnt

    int start(){
        if(front==NULL){
            return -1;
        }
        else{
            return front->data;
        }
    }

    //find back elemnt
        int end(){
        if(front==NULL){
            return -1;
        }
        else{
            return rear->data;
        }
    }
};



int main (){

    dequeue d = dequeue();
    d.push_front(2);
    d.push_front(5);
    d.push_back(1);
    d.push_back(8);
    d.push_front(3);
    cout<<d.start()<<" ";
    cout<<d.end()<<endl;
    d.pop_back();
    d.pop_front();
    d.pop_back();
    d.pop_back();
    d.pop_back();
    d.pop_front();
    
}