# include<iostream>
using namespace std;

class node{
public:
int data;
node *next ;
node *prev ;

node(int value){
    data= value;
    next = NULL;
    prev = NULL;
}
};

//function delete element from start

node *deletionAtStart(node *head){

    // if(head!=NULL){
    // node *temp = head;
    // node *next;
    // next = temp->next;
    // delete temp;
    // head = next;
//if(head){
//head->prev =NULL;}

    // }

    //another approach
    if(head!=NULL){
    node *temp = head;
     head = head->next;
     delete temp;

     if(head){
     head->prev = NULL;
    }

}

    return head;

}


//function delete elemnt from end;
node *deletetionAtEnd(node *head){

    node *curr = head;

if(head!=NULL){

    while(curr->next){
curr=curr->next;
    }


    if(curr->prev!=NULL){

curr->prev->next = NULL;}

else{
    head = NULL;
}

   delete curr;

}

    return head;
}


//function delete element from particular index

node *deletionFromParticularIndex(node *head,int k){
      node *curr =head;

if(head!=NULL){

      if(k==1){

    //delete elemnt from start
     node *temp = head;
     head = head->next;
     delete temp;

     if(head){
     head->prev = NULL;
    }
      }

      else{

      
    //reching at kth position 
    while(--k){
        curr = curr->next;
    }

    if(curr->next==NULL){

        //handling edge case if we are deleting last element
        curr->prev->next = NULL;
        delete curr;
    }


    else{


    //linking nodes
    curr->prev->next = curr->next;
    curr->next->prev = curr->prev;

    delete curr;

}

      }
    }
    return head;

}
//create node function
node *createDDLinsertAtEnd(int arr[],node *head){

node *tail;

    for(int i=0; i<6; i++){

        if(head==NULL){
            head = new node (arr[i]);
            tail = head;
        }

        else{
           node *temp = new node(arr[i]);
           tail->next = temp;
           temp->prev = tail;

           //updating tail 
           tail = temp;
        }
    }
    return head;
}

int main(){
    int arr[] = {1,2,3,4,5,6};
node *head = NULL;
node *print;


head = createDDLinsertAtEnd(arr,head);


//deletion start
// print = deletionAtStart(head);


//deletion end

// print =deletetionAtEnd(head);


//deletion from particular index
int k;
cout<<"enter k :";
cin>>k;

print = deletionFromParticularIndex(head,k);
//printing list

while(print){
    cout<<print->data<<" ";
    print = print->next;
}



}