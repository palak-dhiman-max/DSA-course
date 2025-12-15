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

//function find length of loop

    int lengthOfLoop(node *head) {
       
       node *slow=head;
       node *fast = head;
       int count = 1;
       
       if(fast==NULL || fast->next==NULL){
           return 0;
       }
       
       while(fast!=NULL &&fast->next!=NULL){
           
           slow = slow->next;
           fast = fast->next->next;
           if(slow==fast){
               slow = slow->next;
               while(slow!=fast){
                   slow = slow->next;
                   count++;
               }
               return count;
           }
       }return 0;
        
    }

int main (){
    int arr[]={1,2,3,4,5};
    int i,n;
    i=0;
    n=5;
    
    node *head = createlinkedlist(arr,i,n);
    node *temp = circularlinkedlist(head);

    //detect loop
    // bool result = detectloop(head);

    //second approach 

int result = lengthOfLoop(temp);

cout<<result;


    //printing list

// do{
//     cout<<temp->data<<" ";
//     temp = temp->next;
// } while(temp!=head);


}