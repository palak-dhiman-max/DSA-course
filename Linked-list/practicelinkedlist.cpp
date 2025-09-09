#include<iostream>
#include <vector>
using namespace std;
class node {
    public:
int data;
node *next;
    node(int data){
        this->data = data;
        next = NULL;
    }

};


//function create linked list

 node *createlinkedlist(int arr[],int i,int n){

    
node *head ;
head = NULL;
node *temp;
for(int i=0; i<n; i++){
    //if list is not there
if(head==NULL){
    head = new node(arr[i]);
    temp = head;

}

//if list is there
else{
    
   temp->next = new node(arr[i]);
   temp=temp->next;
   
}

}

return head;
}
// //reverse the given linked list
// int main (){

//     //creating array
//     int arr[]={1,2,3,4,5};
    

//     //making vector for storing address
//     vector<node*>elements;

//     //calling create linked list function
//     node *Head;
//     Head = createlinkedlist(arr,0,5);

//     node *temp1;
//     temp1 = Head;
    

//     while(temp1){
//         cout<<temp1->data<<" ";
//         elements.push_back(temp1);
//         temp1 = temp1->next;
//     }

//     cout<<endl;
//     cout<<"after reversing"<<endl;

//     //printing reversed list
//     for(int i=elements.size()-1; i>=0 ; i--){
//         cout<<elements[i]->data<<" ";
//     }


// }

//another approach

// int main (){

//     //creating array
//     int arr[]={1,2,3,4,5};
    

//     //making vector for storing element
//     vector<int>elements;

//     //calling create linked list function
//     node *Head;
//     Head = createlinkedlist(arr,0,5);

//     node *temp1;
//     temp1 = Head;
    

//     while(temp1){

//         elements.push_back(temp1->data);
//         temp1 = temp1->next;
//     }

// temp1 = Head;
//     //printing reversed list

//     for(int i=elements.size()-1; i>=0 ; i--){
//        temp1->data = elements[i];
//           cout<<temp1->data<<" ";
//        temp1 = temp1->next;
    
//     }


// }

// by acctually conecting in reverse order reversing list this is actually reverse linked list


// int main (){

//     //creating array
//     int arr[]={1,2,3,4,5,6,7,8};
    

//     //calling create linked list function
//     node *Head;
//     Head = createlinkedlist(arr,0,8);

//     node *curr = Head;
//     node *prev = NULL;
//     node *futr ;

//   while(curr){

//     //storing next node adress
//     futr = curr->next;

//     //storing prev address in current such that it point previous one
//     curr->next = prev;

//     //updating previouus
//     prev = curr;

//     //updtaing current
//     curr = futr;


//   }

//      //storing address of last node in head

//      Head = prev;

//     node *print;
//     print = Head;

//     while(print){
//         cout<<print->data<<" ";
//         print = print->next;
//     }

 
// }


// reversing using recursion

node *reverselinkedlist(node *prev,  node *curr){

    //base case 
    if(curr==NULL){
        return prev;
    }

    //main logic

    node *futr ;
    futr = curr->next;
    curr->next = prev;

    return reverselinkedlist(curr,futr);
}

// int main (){

//     int arr[]={1,2,3,4,5};
//     int n = 5;

//     node *head ;
//    head = createlinkedlist(arr,0,n);


//    head = reverselinkedlist(NULL,head);

//    node *temp;
//    temp = head;

//    while(temp){
//     cout<<temp->data<<" ";
//     temp = temp->next;
//    }

//  }



 //reversing list between left and right portion (leetcode problem)
int main (){

    //creating array
    int arr[]={1,2,3,4,5,6,7,8,9};
    

    //calling create linked list function
    node *Head;
    Head = createlinkedlist(arr,0,9);
 int left = 3;
 int right = 7;

 node  *curr;
        node  *prev;
        curr = Head;
        prev = NULL;
        left--;
        right--;
      node *Head1;
      node * temp1;
node *right_next;
  node *print ;


//handling edge case if left = 1
       if(left==0){
    
temp1 = Head;
      while(right--){
        temp1=temp1->next;
      }

      //storing address of right next element
      
      right_next = temp1->next;

temp1->next = NULL;
       Head1 = reverselinkedlist(NULL,curr);

     curr->next = right_next;

     
  print = Head1;
    while(print){
        cout<<print->data<<" ";
        print = print->next;
    }
       }
       

       else{
//setting left at its index
        while(left-- ){
      prev = curr;
      curr=curr->next;
   
        }

        node *left1;
        left1 = curr;


      node  *futr;
  
      temp1 = Head;

      //setting right at its index
      while(right--){
        temp1=temp1->next;
      }

      //storing address of right next element
      
      right_next = temp1->next;


      //making temp1 which is pointing to right null
temp1->next = NULL;

//having adress of four
 Head1=reverselinkedlist(NULL,curr);


 //linking 1 with 4
prev->next = Head1;
cout<<endl;
    

//linking 2 with 5
left1->next = right_next;

    


//printing list 

  print = Head;
    while(print){
        cout<<print->data<<" ";
        print = print->next;
    }
       }
 
}