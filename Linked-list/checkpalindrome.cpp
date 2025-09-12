#include<iostream>
using namespace std;
 

class Node
{
    // making node
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

//reverse list function
Node *reverselinkedlist(Node *prev,  Node *curr){

    //base case 
    if(curr==NULL){
        return prev;
    }

    //main logic

    Node *futr ;
    futr = curr->next;
    curr->next = prev;

    return reverselinkedlist(curr,futr);
}
// finding length of list 

int length(Node *head){
int count =0;
    while(head){
        head=head->next;
        count++;
    }
    return count;
}

//check palindrome function 

 bool checkpalindrome(Node *head){
Node *curr=head;
Node *list1=head;
Node *list2;
Node *rev;
    //dividing list into tow parts
int divlen = (length(head))/2;

divlen--;
//reaching at middle one
while(divlen--){
  curr=curr->next;

}

//pointer points to starting of second list
rev = curr->next;

//break link and seaprate into tow list
curr->next =NULL;

//now reversing second part of list
 list2 = reverselinkedlist(NULL,rev);

 //comparing both list

 while(list1){

 if(list1->data==list2->data){
    list1=list1->next;
    list2=list2->next;
 }
 else{
    return false;
 }
 }
      
return true;
}


//creating list

int main (){
    int arr[]={1,3,4,2,9,1};
    Node * head;
    Node*tail;
    head = NULL;
    tail =NULL;

    //main logic
    for(int i=0; i<6; i++){
    if(head==NULL){
        head = new Node (arr[i]);
        tail = head;
    }

    else{
       tail->next =new Node (arr[i]);
       tail=tail->next;
    }
}

bool print;
print = checkpalindrome(head);

if(print){
    cout<<"palindrome";

}else{
    cout<<"Not palindrome";
}

}