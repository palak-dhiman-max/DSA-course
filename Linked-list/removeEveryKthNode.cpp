#include<iostream>
using namespace std;


class node
{
    // making node
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

//function which remove every kth node
node *removeKthNode(int k,node *curr,node *head){
    int count =1;
node *prev = NULL;


//handling edge case 
if(k==1){
    return NULL;
}
    while(curr){

        //if we are at kth node so delete it and link the rest one
        if(count==k){
        prev->next = curr->next;
        delete curr;

        //updating curr here(point to be noted here only node memory is free 
        //which is dynamically allocated not the pointer is deleted)
        curr = prev->next;
        count=1;
        }

        //if we are not at kth node so we just move on
        else{

            prev = curr;
            curr=curr->next;
            //updating count
            count++;
        }
    }
    return head;

}

//creating list

int main (){
    int arr[]={2,4,6,8,10,12,14,16,18};
    node * head;
    node*tail;
    head = NULL;
    tail =NULL;

    //main logic
    for(int i=0; i<9; i++){
    if(head==NULL){
        head = new node (arr[i]);
        tail = head;
    }

    else{
       tail->next = new node (arr[i]);
       tail=tail->next;
    }
}
int k;
cout<<"enetr k :";
cin>>k;
//calling function 
node *print;
print=removeKthNode(k,head,head);

while(print){

    cout<<print->data<<" ";
    print = print->next;
}

}