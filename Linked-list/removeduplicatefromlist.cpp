# include<iostream>
#include<vector>
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

//function which remove duplicate

node *removeDuplicate(node *head){
  
    node *prev = head;
    node *curr = head->next;
  
    while(curr){

        if(curr->data==prev->data){

            //linking nodes
            prev->next = curr->next;

            //deleting node
            delete curr;

            //updating curr
            curr = prev->next;
        }

        else{

            //updating both pointer
            prev = curr;
            curr = curr->next;
        }
    }
    return head;
}

//second approach

 node *removeDuplicate2(node *head){
   
    node *curr;
  vector <int> ans;
  ans.push_back(head->data);
curr=head->next;
int i=0;
  while(curr){

    if(curr->data!=ans[i]){
        ans.push_back(curr->data);
        i++;
    }
    curr=curr->next;
    
  }

  curr = head;
  node *tempcurr;
  int indx =0;
while(indx < ans.size()){
    
    curr->data = ans[indx];
    indx++;

    tempcurr=curr;
    curr = curr->next;

}

//deleting extra one

tempcurr->next = NULL;

  return head; 
   
}

//creating list

int main (){
    int arr[]={2,2,2,3,3,4,4,5,5,5,5,6,7};
    node * head;
    node*tail;
    head = NULL;
    tail =NULL;

    //main logic
    for(int i=0; i<13; i++){
    if(head==NULL){
        head = new node (arr[i]);
        tail = head;
    }

    else{
       tail->next =new node (arr[i]);
       tail=tail->next;
    }
}

// node *print = removeDuplicate(head);



node *print=removeDuplicate2(head);
//printing list

while(print){
    cout<<print->data<<" ";
    print = print -> next;
}

}


