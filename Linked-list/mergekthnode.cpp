
#include <iostream>
#include <vector>
using namespace std;

class node {

    public :
    
    int data;
    node *next;

    node (int value){
data = value;
next = NULL;

    }
};


//function create list
node * createlinkedlist(int arr[],int i, int size){

    node *head = NULL;
node *temp;
node *tail;

for(int i=0; i<size;i++){
    if(head==NULL){
        head = new node(arr[i]);
        tail = head;
       
    }

    else{

        temp = new node(arr[i]);
        tail->next = temp;
        tail = tail->next;
    }
}
    return head;
}

//function which merge sorted list

node *mergesortedlist(node *head1, node *head2){

    node *h1=head1;
    node *h2=head2;
    node *tail = new node(0) ;
    node *list = tail;

    while(h1 && h2){

        if(h1->data <= h2->data){
            tail->next = h1;
            h1 = h1->next;
            tail=tail->next;
            tail->next = NULL;
        }

        else{

            tail->next = h2;
            h2 = h2->next;
            tail=tail->next;
            tail->next = NULL;

        }
    }

    if(h1){
        tail->next = h1;
    
    }
    else{
        tail->next = h2;
    }

    return list->next;
}

//another approach using mergesort

void mergesort(vector<node*> &vec , int low, int high){

    //base case
    if(low>=high){
        return ;
    }

    int mid =(low+high)/2;
    mergesort(vec,low,mid);
    mergesort(vec,mid+1,high);
    vec[low] = mergesortedlist(vec[low],vec[mid+1]);
     
}

int main (){

    int arr[]={1,2,4};
    int arr1[]={3,6};
    int arr2[]={4,5,9,10};
    int arr3[]={7};
   node *head1= createlinkedlist(arr,0,3);
   node *head2= createlinkedlist(arr1,0,2);
   node *head3= createlinkedlist(arr2,0,4);
   node *head4= createlinkedlist(arr3,0,1);

   //now creating vector

   vector<node *> ans;
   ans.push_back(head1);
   ans.push_back(head2);
   ans.push_back(head3);
   ans.push_back(head4);

   
   //main logic to sort knode
// node *root;

//    for(int i=0; i<ans.size()-1;i++){

//     ans[i+1] = mergesortedlist(ans[i],ans[i+1]);
//    }

//    int a=ans.size()-1;

// root = ans[a];
   
// node *temp = root;
//    while(temp){
//     cout<<temp->data<<" ";
//     temp =temp->next;
//    }



//another approach

mergesort(ans,0,3);
node * root = ans[0];

while(root){
    cout<<root->data<<" ";
    root=root->next;
}


}
