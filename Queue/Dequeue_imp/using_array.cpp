#include<iostream>
using namespace std;

class dequeue{
public:
int front ,rear,size;
int *arr;

dequeue(int s ){
    size =s;
    front =rear =-1;
    arr=new int [s];

}

//for empty check

bool isempty(){
    return front==-1;
}

//for full check

bool isfull(){
    return (rear+1)%size == front;
}

//push elemnts in front
void push_front(int x){
   
   if( isfull()){
    cout<<"overflow"<<endl;
   }

    if(isempty()){
        front = rear = 0;
        arr[0]=x;
        cout<<arr[front]<<" "<<"pushed successfully at front"<<endl;
        return;
    }

    else{
       front = (front-1+size)%size;
       arr[front]=x;
        cout<<arr[front]<<" "<<"pushed successfully at front"<<endl;
    }

}

//push elemnts at back
void push_back(int x){
   
   if( isfull()){
    cout<<"overflow"<<endl;
   }

    if(isempty()){
        front = rear = 0;
        arr[0]=x;
         cout<<arr[rear]<<" "<<"pushed successfully at back"<<endl;
        return;
    }
    
    else{
       rear= (rear+1)%size;
       arr[rear]=x;
        cout<<arr[rear]<<" "<<"pushed successfully at back"<<endl;
    }

}


//pop from front

void pop_front(){

    if(isempty()){
        cout<<"underflow"<<endl;
    }

    else{
        if(front==rear){
            cout<<arr[front]<<" "<<"poped successfully"<<endl;
            front =rear=-1;
        }

        else{

        
cout<<arr[front]<<" "<<"poped successfully"<<endl;
front =(front+1)%size;

}
 
    }
}

//pop from back

void pop_back(){

    if(isempty()){
        cout<<"underflow"<<endl;
    }

    else{
        if(front==rear){
            cout<<arr[front]<<" "<<"poped successfully"<<endl;
            front=rear=-1;
        }

        else{

        
cout<<arr[rear]<<" "<<"poped successfully"<<endl;
rear =(rear-1+size)%size;
    }

}
}

};



int main (){
dequeue d = dequeue(10);
d.push_front(3);
d.push_front(1);
d.push_front(7);
d.push_back(8);
d.push_back(9);
d.push_back(2);
d.pop_front();
d.pop_back();
d.pop_front();
d.pop_front();
d.pop_back();
d.pop_front();
d.pop_back();


}