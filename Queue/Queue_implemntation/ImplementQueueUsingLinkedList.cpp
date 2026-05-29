#include <iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

class myQueue {

  public:
  
  Node *front ;
Node *rear;
int size1;
    myQueue() {
        // Initialize your data members
        front=rear=NULL;
        size1 =0;
    }

    bool isEmpty() {
        // check if the queue is empty
        return front==NULL;
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue
        if(isEmpty()){
            front = new Node(x);
            rear =front;
            size1++;
            cout<<rear->data<<" "<<"pushed succesfully"<<endl;
            return;
        }
        else{
            rear->next = new Node(x);
            rear = rear->next;
            size1++;
            cout<<rear->data<<" "<<"pushed succesfully"<<endl;
        }
    }

    void dequeue() {
        // Removes the front element of the queue
        
        if(isEmpty()){
            return;
        }
        
        else{
            Node *temp=front;
            front = front->next;
            delete temp;
            size1--;
        }
    }

    int getFront() {
        
          // If queue is empty, return -1
          if(isEmpty()){
              return -1;
          }
        // Returns the front element of the queue
        return front->data;
      
    }

    int size() {
        // Returns the current size of the queue.
        return size1;
    }
};
int main (){
myQueue q = myQueue();
q.enqueue(3);
q.enqueue(9);
q.enqueue(3);
q.enqueue(9);
q.enqueue(3);
q.enqueue(9);
}