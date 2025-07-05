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


void delete_head(Node *&head)   //head k delete korbo tai pura head kei parameter hishebe nilam
{
    Node *delete_node = head;
    head = head->next;
    delete delete_node;
}

void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
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
    delete_head(head);
    // delete_head(head);   //jotobar function call korbo totobar head k delete korbe
    // delete_head(head);

    print(head);
    return 0;
}