#include<iostream>
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


//function merge tow sorted lists

node *mergeSortedList(node *head1,node *head2){

    node *head = new node(0);
    node *tail = head;

    while(head1 && head2){

     if(head1->data<=head2->data){
          tail->next = head1;
          head1=head1->next;
          tail = tail->next;
          tail->next =NULL;
     }

     else{
          tail->next = head2;
          head2=head2->next;
          tail = tail->next;
          tail->next =NULL;
     }



    }

    //if second list exhausted

    if(head1){
        tail->next = head1;
    }

    //if first list exhausted
    else{
     tail->next = head2;
    }

    //removing extra zero which we have make initially

    tail = head;
    head = head->next;
    delete tail;


          return head;


}



//function create list
 node *makelinkedlist(int arr[],int size , int indx){

    if(indx==size){
        return NULL;
    }

    node *temp;
    temp = new node(arr[indx]);
    temp->next = makelinkedlist(arr,size,indx+1);
    return temp;
}

int main (){
    int arr []={2,4,5,7};
    int arr1 []={3,4,4,6,8,10};

 int i=0;
node *head1;
node *head2;
head1 = makelinkedlist(arr,4,i);
head2 = makelinkedlist(arr1,6,i);

//printing list

node *temp;
temp = mergeSortedList(head1,head2);



while(temp){
    cout<<temp->data<<" ";
    temp = temp->next;
}

}