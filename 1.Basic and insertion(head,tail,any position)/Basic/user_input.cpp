#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);   // creating new node 

    if (head == NULL){    // If list is empty  
        head = newnode;   //  newnode becomes head
        tail = newnode;   // also tail
        return;
    }

    tail->next = newnode; // attch new node after tail
    tail = newnode;       // update tail to newnode 
}
void print(Node *head)
{
    Node *temp = head;    // start from head

    while (temp != NULL)  // till end of list loop will continue
    {
        cout << temp->val << endl; // print value
        temp = temp->next;         // move to new node
    }
}
int main()
{
    Node *head = NULL;   //Initially empty list
    Node *tail = NULL;   //Initially empty list
    int x;
    while (1)            //infinite loop 
    {
        cin >> x;        //take input
        if (x == -1)
        {
            break;       //if input=-1 then stop 
        }
        insert_at_tail(head, tail, x);  //insert x into list
    }
    print(head);

    return 0;
}