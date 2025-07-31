#include <iostream>
using namespace std;

//creating node dynamically

class Node{
    
    public :
    int data;
    Node*next;


    Node(int data){
        this->data=data;
        next=NULL;
    }
};
// int main (){
// Node *head;
// head = new Node(5);
// cout<<head->data<<endl;
// cout<<head->next<<endl;


// }

// int main (){


// //coverting  array to linked list;

// int arr[]={1,2,3,4,5};


// Node * head;
// head = NULL;

// for (int i=0; i<5; i++){

//     // if list is not there
// if(head==NULL){
//     head = new Node(arr[i]);
// }

// // if list is there
// else{
//     Node *temp ;
//     temp = new Node(arr[i]);
//     temp->next=head;
//     head = temp;
// }

// }

// Node *temp ;
// temp = head;

// while(temp!=NULL){
//     cout<<temp->data<<endl;
//     temp = temp->next;
// }

// cout<<"After inserting element :"<<endl;
// // inserting element in starting of list

// Node *element ;
// element = new Node(28);
// element->next=head;
// head = element;

// Node *inserted ;
// inserted = head;

// while(inserted!=NULL){
//     cout<<inserted->data<<endl;
//     inserted =inserted ->next;
// }

// }

//inserting elements at the end of the array which we converted in linked list

// int main (){
//     int arr[]={1,2,3,4,5};

//     Node *head ;
//     head = NULL;
  


//  for(int i=0; i<5; i++){

//     // if elements are not present in list
//     if(head==NULL){
//         head = new Node(arr[i]);
//     }

//     else{
//         Node *tail;
//         tail = head;
//         //sabse pahle tail ko last index pe layege
//         while(tail->next!=NULL) {
//             //updating value of tail
//             tail=tail->next;
//         }
//            //store new nodes(the new element you want to insert at end) adress in tail next (in previous node's next)
//             tail->next =  new Node(arr[i]);
            
//     }

// }

// Node*temp;
// temp = head;

//     while(temp){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }



// }


// optimised version of previous one

// int main (){
//     int arr[]={1,2,3,4,5};
//     Node * head;
//     Node*tail;
//     head = NULL;
//     tail =NULL;

//     for(int i=0; i<5; i++){
//     if(head==NULL){
//         head = new Node (arr[i]);
//         tail = head;
//     }

//     else{
//        tail->next =new Node (arr[i]);
//        tail=tail->next;
//     }
// }


// Node *temp;
// temp = head;

// while(temp){
//     cout<<temp->data<<endl;
//     temp = temp->next;
// }

// }

// making linked list using recursion

// Node *makelinkedlist(int arr[],int size , int indx){

//     if(indx==size){
//         return NULL;
//     }

//     Node *temp;
//     temp = new Node(arr[indx]);
//     temp->next = makelinkedlist(arr,size,indx+1);
//     return temp;
// }

// int main (){
//     int arr []={4,6,3,2,1};

//  int i=0;
// Node *head;
// head = makelinkedlist(arr,5,i);

// //printing list
// Node *temp;
// temp = head;

// while(temp){
//     cout<<temp->data<<endl;
//     temp = temp->next;
// }
// }


// making linked list using recursion but inserting node in beginning
//  Node * createlinkedlist(int arr[],int size,int indx,Node *prev){
//     if(indx==size){
//         return prev;
//     }

//     Node *temp;
//     temp = new Node(arr[indx]);
//     temp->next = prev;
//     return createlinkedlist(arr,size,indx+1,temp);
//  }
// int main (){
//     int arr[]={1,2,3,4,5,6};
//     Node *head;
//     head = NULL;
//     head = createlinkedlist(arr,6,0,head);

//     //printing list
//     Node *temp;
// temp = head;



// while(temp){
//     cout<<temp->data<<endl;
//     temp = temp->next;
// }

// }

// making linked list using recursion but inserting node in middle.
 Node * createlinkedlist(int arr[],int size,int indx){
    if(indx==size){
        return NULL;
    }

    Node *temp;
    temp = new Node(arr[indx]);
    temp->next =createlinkedlist(arr,size,indx+1);
    return temp;
 }
int main (){
    int arr[]={2,4,6,8,10,12};
    Node *head;
    head = NULL;
    head = createlinkedlist(arr,6,0);

    //printing list
    Node *temp;
temp = head;

Node *temp1;
temp1=head;
cout<<"enter index at which you want to insert element: ";
int k;
cin>>k;

// ye isliye likha hai kuki agar isko nahi likhenge to ek jayada index ke badd insertion hoga man lo 3 ke baad insert 
// karna tha par 4 ke bad insert hoga.
k--;

//reaching at index after which we have to insert
while(k--){
    temp1 = temp1->next;
   
}



//making node which we have to insert
Node *temp2;
temp2 = new Node (28);
// connecting element at 3 indx with this new node

temp2->next = temp1->next;

// connecting element at 2 indx with this new node
temp1->next = temp2;

while(temp){
    cout<<temp->data<<endl;
    temp = temp->next;
}

}