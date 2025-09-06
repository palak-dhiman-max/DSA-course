#include <iostream>
using namespace std;
// creating node dynamically

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


//creating list

// int main (){
//     int arr[]={2,4,6,8,10};
//     Node * head;
//     Node*tail;
//     head = NULL;
//     tail =NULL;

//     //main logic
//     for(int i=0; i<5; i++){
//     if(head==NULL){
//         head = new Node (arr[i]);
//         tail = head;
//     }

//     else{
//        tail->next =new Node (arr[i]);
//        tail=tail->next;
//     }
// }

// //deletion of starting node
// Node * temp1;
// temp1 = head;

// head = head->next;
// delete temp1;

// //printing list
// Node *temp;
// temp = head;

// while(temp){
//     cout<<temp->data<<endl;
//     temp = temp->next;
// }

// }

// deletion of ending node

// int main (){
//     int arr[]={2,4,6,8,10};
//     Node * head;
//     Node*tail;
//     head = NULL;
//     tail =NULL;

//     //main logic
//     for(int i=0; i<5; i++){
//     if(head==NULL){
//         head = new Node (arr[i]);
//         tail = head;
//     }

//     else{
//        tail->next =new Node (arr[i]);
//        tail=tail->next;
//     }
// }

// // //deletion of ending node

//   if(head!=NULL){

// //if there is only one node
//     if(head->next ==NULL){
//  Node *temp3;
//  temp3 = head;
//  delete temp3;
//  head = NULL;
//     }
// else{
// Node *prev;
// Node *tail1;
// prev = NULL;
// tail1 = head;

// while(tail1->next!=NULL){
//     prev = tail1;
//     tail1 =tail1->next;
// }

// prev->next = NULL;
// delete tail1;
// } }

// //printing list
// Node *temp;
// temp = head;

// while(temp){
//     cout<<temp->data<<endl;
//     temp = temp->next;
// }

// }


// deletion of node from particular index


//creating list
// int main (){
//     int arr[]={2,4,6,8,10};
//     Node * head;
//     Node*tail;
//     head = NULL;
//     tail =NULL;

//     //main logic
//     for(int i=0; i<5; i++){
//     if(head==NULL){
//         head = new Node (arr[i]);
//         tail = head;
//     }

//     else{
//        tail->next =new Node (arr[i]);
//        tail=tail->next;
//     }
// }

// //deletion of  node from particular index

// Node *prev;
// Node *curr;
// prev =NULL;
// curr = head;
// int x;
// cout<<"enter index: ";
// cin>>x;
//   x--;

// //handle edge case agar ye nahi karenge to infinite loop
// me chale jayege if x=-1, so loop went to infinite as condition true as -1 is non zero

// if(x==0){
//     Node *temp4;
//     temp4= head;
//     head=head->next;
//     delete temp4;
// }

// else{

// while(x--){
//     prev = curr;
//     curr = curr->next;
// }

// prev ->next = curr->next;
// delete curr;}

// //printing list
// Node *temp;
// temp = head;

// while(temp){
//     cout<<temp->data<<endl;
//     temp = temp->next;
// }

// }






// deleting element at particular index using recursion

// void deletenode(int arr[] , Node * head ,int y,Node * prev,Node * curr){

//     if(y==0){
//         prev->next = curr->next;
//         delete curr;
//         return ;
//     }

//     deletenode(arr,head,y-1,curr,curr->next);
// }


//creating list
// int main (){
//     int arr[]={2,4,6,8,10};
//     Node * head;
//     Node*tail;
//     head = NULL;
//     tail =NULL;

//     //main logic
//     for(int i=0; i<5; i++){
//     if(head==NULL){
//         head = new Node (arr[i]);
//         tail = head;
//     }

//     else{
//        tail->next =new Node (arr[i]);
//        tail=tail->next;
//     }
// }


// //deleting node from particular index
// int x;
// cout<<"enter index : ";
// cin>>x;

// Node * prev = NULL;
// Node * curr = head ;

// //if is to handle edge case
// if(x==1){
// Node * temp4;
// temp4 = head;
// head=head->next;
// delete temp4;
// }
// else{
// deletenode(arr,head,x-1,prev,curr);
// }

// //printing list
// Node *temp;
// temp = head;

// while(temp){
//     cout<<temp->data<<endl;
//     temp = temp->next;
// }

// }

// another approach
// Node *deletenode(int arr[], int y, Node *curr)
// {

//     if (y == 0)
//     {
//         Node *temp;
//         temp = curr->next;
//         delete curr;
//         return temp;
//     }

//     curr->next = deletenode(arr, y - 1, curr->next);
//     return curr;
// }
// int main()
// {
//     int arr[] = {2, 4, 6, 8, 10};
//     Node *head;
//     Node *tail;
//     head = NULL;
//     tail = NULL;

//     // main logic
//     for (int i = 0; i < 5; i++)
//     {
//         if (head == NULL)
//         {
//             head = new Node(arr[i]);
//             tail = head;
//         }

//         else
//         {
//             tail->next = new Node(arr[i]);
//             tail = tail->next;
//         }
//     }
//     // deleting node from particular index
//     int x;
//     cout << "enter index : ";
//     cin >> x;

//     Node *prev = NULL;
//     Node *curr = head;

//     // if is to handle edge case
//     if (x == 1)
//     {
//         Node *temp4;
//         temp4 = head;
//         head = head->next;
//         delete temp4;
//     }
//     else
//     {
//         deletenode(arr, x - 1,curr);
//     }

//     // printing list
//     Node *temp;
//     temp = head;

//     while (temp)
//     {
//         cout << temp->data << endl;
//         temp = temp->next;
//     }
// }


//delete when head pointer is not given

Node *deletenode(int arr[], int y, Node *curr)
{

    if (y == 0)
    {
        Node *temp;
        temp = curr->next;
        delete curr;
        return temp;
    }

    curr->next = deletenode(arr, y - 1, curr->next);
    return curr;
}
int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    Node *head;
    Node *tail;
    head = NULL;
    tail = NULL;

    // main logic
    for (int i = 0; i < 5; i++)
    {
        if (head == NULL)
        {
            head = new Node(arr[i]);
            tail = head;
        }

        else
        {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
    }
    // deleting node from particular index
    int x;
    cout << "enter index : ";
    cin >> x;

    Node *prev = NULL;
    Node *curr = head;

    // if is to handle edge case
    if (x == 1)
    {
        Node *temp4;
        temp4 = head;
        head = head->next;
        delete temp4;
    }
    else
    {
        deletenode(arr, x - 1,curr);
    }

    // printing list
    Node *temp;
    temp = head;

    while (temp)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}