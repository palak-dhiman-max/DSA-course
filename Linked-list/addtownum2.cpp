#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node *next;

    node(int value){

        data = value;
        next = NULL;
    }
};


//function create singly linked list
node * createlinkedlist(int arr[],int i,int size){

    node *head = NULL;
    node *temp;
    node *tail;

   for(int i=0; i<size; i++){
    if(head==NULL){
        
  head = new node (arr[i]);
tail = head;
    }

    else{

        node *temp;
        temp = new node(arr[i]);
        tail->next = temp;
        tail =tail->next;

    }

}

return head;

}

node *reverselist(node *prev,node *curr ){

    node *futr;
    if(curr==NULL){
        return prev;
    }

    futr = curr->next;
    curr->next = prev;
   return reverselist(curr,futr);
}



node *addtownumber(node *head1 ,node *head2){

    node *head =new node (0);
    node *temp =head;
    node *first = reverselist(NULL,head1);
    node *second = reverselist(NULL,head2);
    int data ,carry;
    carry =0;
    
    while(first && second){

data = first->data + second->data +carry;
temp->next = new node (data%10);
carry = data/10;
first = first->next;
second = second->next;
temp = temp->next;

    }

    while(first){
        data = first->data +carry;
        temp->next = new node (data %10);
        carry= data/10;
        first = first->next;
        temp = temp->next;
    }

        while(second){
        data = second->data +carry;
        temp->next = new node (data %10);
        carry= data/10;
        second = second->next;
        temp = temp->next;
    }

    while(carry){

        temp->next = new node (carry %10);
        temp = temp->next;
        carry /=10;
    }

    head = reverselist(NULL,head->next);
    return head;
}



int main (){
    int arr[]={9,7,6,8,4};
    int arr2[]={6,4,3,8};

    int i,n,m;
    i=0;
    n=5;
    m=4;
 
    node *head1 = createlinkedlist(arr,i,n);
    node *head2 = createlinkedlist(arr2,i,m);

 node *resultfinal = addtownumber(head1,head2);

    while(resultfinal){
        cout<<resultfinal->data<<" ";
        resultfinal = resultfinal->next;
    }


}