#include<iostream>
using namespace std;


class node{
    
    public :
    int data;
    node*next;


    node(int data){
        this->data=data;
        next=NULL;
    }
};


//function which sort list

node *sortList(node *head){
    node *temp = head;
    int count0,count1,count2;
    count0 =0;
    count1 =0;
    count2 = 0;


    //counting that how many zeros ,ones and tows and storing them in variables
    while(temp){

        if(temp->data==0){
            count0++;
        }

        else if(temp->data == 1){
            count1++;
        }

        else{
            count2++;
        }

        temp=temp->next;
    }

    temp = head;

    //overwritting zero
    while(count0--){
        temp->data =0;
        temp = temp->next;
    }

    //overwritting one
    while(count1--){
        temp->data =1;
        temp = temp->next;
    }

    //overwritting tow
        while(count2--){
        temp->data =2;
        temp = temp->next;
    }
    
    return head;

}


//second approach where we are not changing data
//function sort list

node *SortedList2(node *head){

    node *temp =head;
    node *head0=NULL;
    node *head1=NULL;
    node *head2 =NULL;
    node *head1temp =NULL;
    node *head2temp =NULL;

    while(temp){


        //if node is zero
        if(temp->data==0){

            //if head0 is null so create it
            if(head0==NULL){
                head0 = temp;


                //updating head otherwise infinite loop
                head = temp;
            }

            //else we are connecting all zero nodes
            else{
            head0->next = temp;
            head0 = head0->next;
            }

            //updating temp

            temp = temp->next;
        }

//if node is one
        else if(temp->data==1){

            //if head0 is null so create it
            if(head1==NULL){
                head1 = temp;

                //storing value of first node (ones)
                head1temp = temp;
            }

            //else we are connecting all zero nodes
            else{
            head1->next = temp;
            head1 = head1->next;
            }

            //updating temp

            temp = temp->next;
        }


        //if node is tow

        else{

            //if head0 is null so create it
            if(head2==NULL){
                head2 = temp;

                    //storing value of first node (tows)
                head2temp = temp;
            }

            //else we are connecting all zero nodes
            else{
            head2->next = temp;
            head2 = head2->next;
            }

            //updating temp

            temp = temp->next;
        }
    }

     
    //handling edge cases
    

    //if tow elemnts are present 
    
    if(head0==NULL){
        head1->next =head2temp;
        head2->next=NULL;
    }
    
    else if(head1==NULL){
        head0->next = head2temp;
        head2->next==NULL;
    }
    
    else if(head2==NULL){
        
    head0->next = head1temp;
    head1->next = NULL;
    }

         else{
    

    head0->next = head1temp;
    head1->next = head2temp;
    head2->next =NULL;}

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
    int arr []={0,2,1,0,1,2,0,0};
  

 int i=0;
node *head1;

head1 = makelinkedlist(arr,8,i);



//first approach
 node *temp;
// temp = sortList(head1);


//second approach
temp = SortedList2(head1);



//printing list
while(temp){
    cout<<temp->data<<" ";
    temp = temp->next;
}

}