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


//function create circular linked list

node *circularlinkedlist(node *head){
       node *temp = head;
    while(temp->next){
        temp = temp->next;
    }

    temp->next = head;

    return head;
}

//function which remove loop

node *removeloop(node *head){
    node *slow = head;
    node *fast = head;


    //detecting loop
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            break;
        }
    }

    //set slow equal to head

    slow = head;

    //finding that element from where loop beigns(as only there both meet)

    while(slow!=fast){
slow = slow->next;
fast = fast->next;
    }

    //updating slow (as removing loop)

    while(slow->next){

        slow = slow ->next;
        if(slow->next == fast){
            //if there is such a node which is pointing to starting loop node it means
            // that is the last node.
            slow->next = NULL;

        }
        
    }

    return head;
}


//second approach
node *removeloop2(node *head){
    node *slow = head;
    node *fast = head;
    int count =1;

    //detecting loop
    while(fast!=NULL && fast->next!=NULL){

        slow = slow->next;
        fast = fast->next->next;

        if(slow==fast){
            break;
        }

    }

    slow = slow->next;

    //finding length of loop

    while(slow!=fast){
        slow = slow->next;
        count++;
    }

    //setting slow equal to head and fast also head
     slow = head;
     fast = head;

//kepping distance equal to length of loop between them
    while(count--){
        fast=fast->next;
    }


    //getting starting node from where loop starts
    while(slow!=fast){
        slow = slow->next;
        fast = fast->next;
    }

    while(slow->next){
  slow = slow ->next;
        if(slow->next == fast){
            //if there is such a node which is pointing to starting loop node it means
            // that is the last node.
            slow->next = NULL;

        }
      
        //point to be noted that you should update slow before if condition otherwise you get se
        //segmentation fault becasue when your slo->next = fast yoy make slow = null
        //and then one more condition is checked that say slow = slow->next but it
        //didnt exist you cant acces it slow==null 
    }


}


int main (){
    int arr[]={1,2,3,4,5};
    int i,n;
    i=0;
    n=5;
    
    node *head = createlinkedlist(arr,i,n);
    node *temp1 = circularlinkedlist(head);

// node *temp = removeloop(temp1);

//second approch

node *temp = removeloop2(temp1);

   // printing list

while(temp){
    cout<<temp->data<<" ";
    temp = temp->next;
} 


}