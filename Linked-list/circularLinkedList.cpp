#include<iostream>
#include<vector>
#include<unordered_map>
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


// question detect the loop

//function which traverse vector

bool traverse(vector<node *>t , node *target){

    for(int i=0; i<t.size();i++){

    if(t[i]==target){
        return false;
    }

    }
    return true;
}


//function which detect the loop

bool detectloop(node *head){

    vector<node*>ans;
    node *temp;
    temp = head;

    while(temp){

        if(temp==head){
            ans.push_back(temp);
            temp = temp->next;
        }

        if(traverse(ans,temp)){
            ans.push_back(temp);
            temp = temp->next;
        }
        else{
            return true;
        }
    }

    return false;
}

//second approach which detect loop in o(n) but by taking extra space using unordered map

bool detectloop2(node *head){
 node *temp=head;
    unordered_map<node*,bool>visited;

    while(temp){

        if(visited[temp]==1){
            return true;
        }
        visited[temp] = 1;
        temp = temp->next;
    }
    return false;
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

bool  result = detectloop2(head);

    if(result){
        cout<<"loop exists";
    }
else{
    cout<<"loop not exist";
}



    //printing list

// do{
//     cout<<temp->data<<" ";
//     temp = temp->next;
// } while(temp!=head);


}