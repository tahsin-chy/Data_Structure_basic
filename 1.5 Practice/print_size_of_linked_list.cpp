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


void insert_at_tail(Node *&head, Node *&tail, int x)
{

    Node *newnode = new Node(x);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}


void print(Node *head,int count)
{
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    cout<<"Size of Linked List : "<<count;
}


int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int x;

    while (1)
    {
        cin >> x;
        if (x == -1)
        {
            break;
        }
        insert_at_tail(head, tail, x);
    }
    print(head,0);
    return 0;
}