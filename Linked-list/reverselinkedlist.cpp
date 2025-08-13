#include <iostream>
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


//reversing linkedlist function
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


 //linking elemnts
prev->next = Head1;
cout<<endl;
    

//linking elemnts
left1->next = right_next;

    


//printing list 

  print = Head;
    while(print){
        cout<<print->data<<" ";
        print = print->next;
    }
       }
 
}