#include <iostream>
using namespace std;

class node
{
    // making node
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

// finding list length 
int length(node *head)
{
    int count = 0;
     while (head)
    {
        head = head->next;
        count++;
    }
    return count;
}


// function which remove nth node from end

node *removeNthNode(node *head, int n)
{

    node *temp;
    temp = head;
    node *prev;
    prev = NULL;

    int nthnode = length(head) - n;

    // handling edge cases
    if (nthnode == 0)
    {
        node *temp1;
        temp1 = head;
        head = head->next;
        delete temp1;
        return head;
    }


    //logic to remove nth node and linking the rest
    while (nthnode--)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = temp->next;
    delete temp;

    return head;
}



// creating list

int main()
{
    int arr[] = {2,4,6,8,10};
    node *head;
    node *tail;
    head = NULL;
    tail = NULL;

    // main logic
    
    for (int i = 0; i < 5; i++)
    {
        if (head == NULL)
        {
            head = new node(arr[i]);
            tail = head;
        }

        else
        {
            tail->next = new node(arr[i]);
            tail = tail->next;
        }
    
}
    int n;
    cout << "enter n";
    cin >> n;
    node *print;
    print = removeNthNode(head, n);

    // printing list

    while (print)
    {
        cout << print->data << " ";
        print = print->next;
    }
}