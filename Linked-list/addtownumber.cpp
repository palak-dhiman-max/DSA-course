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

int findplace(node *head){

    node *temp = head;
    int count = 1;

    while(temp){
        count = count * 10;
        temp = temp->next;
    }

    return count;
}


int addtownumber(node *head1 ,int place){

    node *temp=head1;
    int result=0;
    while(temp){
  
        result = result+temp->data *place; 
        temp = temp->next;
        place = place/10;


    }

    return result;
}

node *createlist(int number){
node *head =NULL;
node *temp ;

    while(number){
        if(head==NULL){
            head = new node (number%10);
            number = number/10;
        }
        
        else{

temp = new node (number%10);
temp -> next = head;
head = temp;
number = number/10;

        }
    }

    return head;

}

int main (){
    int arr[]={8,5,1,6,7,0,9,2,4,4,0,9};
    int arr2[]={7,4,7,8,1,0,5,9,0,8,3,0};

    int i,n,m;
    i=0;
    n=12;
    m=12;
 
    node *head1 = createlinkedlist(arr,i,n);
    node *head2 = createlinkedlist(arr2,i,m);

    node *temphead1 = head1;
    node *temphead2 = head2;

    int place = findplace(head1);
    
    int place2 = findplace(head2);

    
    int result = addtownumber(head1,place/10);
    
    int result2=addtownumber(head2,place2/10);


    int final = result + result2;

    
    
    node *resultfinal=createlist(final);


    while(resultfinal){
        cout<<resultfinal->data<<" ";
        resultfinal = resultfinal->next;
    }


}