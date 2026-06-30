#include<iostream>
#include<queue>
using namespace std;

//node class

class node{

    public:
    int data;
    node *prev  ;
    node *next;

    node(int x){

        data =x;
        prev = next = NULL;
    }
};



int main (){

    queue<node *> q;
    int x;
    cout<<"root :";
    cin>>x;
    node *root = new node(x);
    q.push(root);
    
    while(!q.empty()){

        node *temp = q.front();
        q.pop();


        int first ,second;
          cout<<"first child of "<<temp->data<<" :";
        cin>>first;
       
        if(first!=-1){
            node *left = new node(first);
            temp->prev = left;
            q.push(temp->prev);
        }
    cout<<"second child of "<<temp->data<<" :";
        cin>>second;
             if(second!=-1){
            node *right = new node(second);
            temp->next = right;
            q.push(temp->next);
        }
    }
}