#include <iostream>
using namespace std ;
class queue{
 
    public:
    int *arr;
    int front ;
    int rear ;
    int size;

    queue(int s){
        size =s;
        arr = new int[s];
        front =-1;
        rear =-1;
    }


    //insert elemnt in queue
    void push (int x){

        if(isempty()){
           front=0;
           rear=0;
           arr[0]=x;
        cout<<x<<" "<<"is inserted succesfully in queue"<<endl;

        }

       else if(isfull()){
            cout<<"Queue Overflow"<<endl;
            return;
        }
      
        
        else{
        rear =(rear+1)%size;
        arr[rear]=x;
        cout<<x<<" "<<"is inserted succesfully in queue"<<endl;   
}
    }

    //pop elemnt from queue
    void pop(){
        if(isempty()){
            cout<<"Queue Underflow"<<endl;
            
        }
        
        if(front==rear){
            front=rear=-1;
        }
        else{
  int element = arr[front];
        front =(front+1)%size;
        cout<<element<<" "<<"is deleted from queue"<<endl;
        }
      
       
    }

    // queue is empty or not
    bool isempty(){
       return front==-1;
    }

    // queue is full or not
    bool isfull(){
        return (rear+1)%size ==front;
    }

    int start(){
        return arr[front];
    }

};
int main (){
  queue q =  queue(7);
  q.push(3);
  q.push(2);
  q.pop();
 cout<<q.start()<<" "<<"is front elemnt"<<endl;
  q.push(8);
  q.push(7);
  q.push(3);
  q.push(1);
  q.push(2);
  cout<<q.isfull()<<endl;
q.push(5);

  q.pop();
  q.pop();
  q.pop();
  q.pop();
  q.pop();
  q.push(1);
 cout<<q.start()<<" "<<"is front elemnt"<<endl;
 q.push(4);
 q.pop();
 q.pop();
 cout<<q.isempty();
 

}