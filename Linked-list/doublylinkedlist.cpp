#include<iostream>
using namespace std;


//creating node class for doubly linked list
class node{
    public:
    int data;
    node *prev;
    node *next;

    node(int value){
        data=value;
        prev =NULL;
        next = NULL;
    }
};

//making linked list by inserting the elemnts at start using array

 node *createDDL(int arr[],node *head){

     for(int i=0; i<5; i++){

    //if list didn't exist make the node and store address in head

    if(head==NULL){
     head = new node(arr[i]);
    }

    else{
        //creating temp node
        node *temp =new node(arr[i]);

        //now linking the nodes
        temp->next = head;
        head->prev = temp;
        head = temp;

    }
}

return head;
}


//creating the list by inserting the elemnets at end
node *createDDLinsertAtEnd(node *head, int arr[]){

node *tail;

    for(int i=0; i<5; i++){

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

//by recursion creating list
node * createDDLrecursively(int arr[], int i,int n,node *back){

    //base case 
    if(i==n){
        return NULL;
    }

    node *temp = new node(arr[i]);
    temp->prev = back;
    temp->next = createDDLrecursively(arr,i+1,n,temp);
    return temp;
}

//inserting element at particular index in a linked list
 node *insertmiddle(node *head,int k){
node *curr = head;
node *temp;
    int ktemp;

    ktemp = k;
    //for handling edge cases
            while(k--){
         curr=curr->next;
    }

    if(ktemp==0){

        //if head is null
        if(head==NULL){
      temp = new node (5);
        }

        else{

    //inserting elements at starting
    temp = new node (5);
    temp->next = head;
    head->prev = temp;
    head = temp;
        }

    }


    else if(curr->next==NULL){
        //inserting elemnts at end
        temp = new node (5);
        curr->next = temp;
        temp->prev = curr;
    }


    else{

    

    //inserting elements at middle

    temp = new node (5);

    //linking the nodes(right)
    temp->next = curr->next;
    curr->next->prev = temp;

    //linking the rest node(left)

    curr->next = temp;
    temp->prev = curr;

}

    return head;

}


//main function
int main (){

int arr[] = {1,2,3,4,5};
node *head = NULL;
node *print;
node *print1;

//insertion at start
print = createDDL(arr,head);

////printing list
// while(print){
//     cout<<print->data<<" ";
//     print = print ->next;
// }

// cout<<endl;

// //insertion at end
// print1=createDDLinsertAtEnd(head,arr);

// //printing list
// while(print1){
//     cout<<print1->data<<" ";
//     print1 = print1 ->next;
// }

// //create by recursion 

// node *print2 = createDDLrecursively(arr,0,5,NULL);

// cout<<endl;
// //printing list
// while(print2){
//     cout<<print2->data<<" ";
//     print2 = print2 ->next;
// }


//inserting element at particular index

node *print5;
int k;
cout<<"enter kth index after which you insert element :";
cin>>k;

print5 = insertmiddle(print , k-1);

cout<<endl;

//printing list
while(print5){
    cout<<print5->data<<" ";
    print5 = print5 ->next;
}


}