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

int findlength(node *head){

    int count = 0;

    while(head){
        count++;
        head = head->next;
    }

    return count;
}

int findintersection (node *head1 , node *head2){
     int diff;
    int length1 = findlength(head1);
    int length2 = findlength(head2);

    if(length1>length2){
        diff = length1-length2;

        while(diff--){
            head1 = head1->next;
        }

        while(head1!=head2){
head1=head1->next;
head2=head2->next;
        }

        return head1->data;
    }
    
else if(length1==length2){
    
        while(head1!=head2){
head1=head1->next;
head2=head2->next;
        }

        return head1->data;
}

        else{
        diff = length2-length1;

        while(diff--){
            head2 = head2->next;
        }

        while(head1!=head2){
head1=head1->next;
head2=head2->next;
        }

        return head1->data;
    }
    
}


int findintersection2(node *head1 ,node *head2){
    //second approach

// firstly we reach at last node
node *temphead1=head1;

while(temphead1->next){
    
    temphead1=temphead1->next;
}

//making loop by connecting last with first node 

temphead1->next = head1;


//now using slow and fast pointer we will find starting of loop  


node *slow = head2;
node *fast = head2;



while(fast!=NULL && fast->next!=NULL){
    slow = slow->next;
    fast = fast->next->next;
    
    if(slow==fast){
        break;
    }
}

if(!fast|| !fast->next){
    return -1;
}

slow = head2;

while(slow!=fast){
    slow=slow->next;
    fast = fast->next;
}

return slow->data;

    
}


int main (){
    int arr[]={1,2,3,4,5,6,7};
    int arr2[]={8,9};

    int i,n,m;
    i=0;
    n=7;
    m=2;
 
    node *head1 = createlinkedlist(arr,i,n);
    node *head2 = createlinkedlist(arr2,i,m);

    node *temphead1 = head1;
    node *temphead2 = head2;

int count = 4;
    while(count--){
        temphead1 = temphead1->next;
    }

    while(temphead2->next){
        temphead2 = temphead2->next;

    }

    temphead2->next = temphead1;

   int result= findintersection(head1,head2);
   int result2 = findintersection2(head1,head2);
   cout<<result<<endl;
    cout<<result2;

}