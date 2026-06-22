#include<iostream>
using namespace std;

class node{

    public:

    int data;
    node *prev;
    node *next;

    node(int x){
        data =x;
        prev = next = NULL;
    }
};

node *binary_tree(){
   int x;
     cin>>x;
    if(x==-1){
        return NULL;
    }


  node *temp = new node(x);

  cout<<"enter left child of "<<x<<":";
  temp->prev =  binary_tree();
  cout<<"enter right child of "<<x<<":";
  temp->next = binary_tree();
  return temp;
}

void pre_order(node *root){

    if(root == NULL){
        return;
    }

    cout<<root->data <<" ";
    pre_order(root->prev);
    pre_order(root->next);

}


int main (){
  node *root ;
  cout<<"enter root node:";
  root = binary_tree();
  pre_order(root);
}