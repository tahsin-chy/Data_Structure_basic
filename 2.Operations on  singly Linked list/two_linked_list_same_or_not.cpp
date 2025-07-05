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


int size(Node *head)
{
    Node *tmp = head;
    int count = 0;

    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}


void same_or_not(Node *head1, Node *head2)
{
    Node *tmp1 = head1;
    Node *tmp2 = head2;

    while (tmp1 != NULL && tmp2 != NULL)
    {
        if (tmp1->val != tmp2->val)
        {
            cout << "These two linked lists are not Same" << endl;
            return;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    cout << "These two linked lists are Same" << endl;
}


int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val1;
    while (1)
    {
        cin >> val1;

        if (val1 == -1)
        {
            break;
        }

        insert_at_tail(head1, tail1, val1);
    }

    int sizeone = size(head1);
    int val2;

    while (1)
    {
        cin >> val2;
        if (val2 == -1)
        {
            break;
        }

        insert_at_tail(head2, tail2, val2);
    }

    int sizetwo = size(head2);

    if (sizeone == sizetwo)
        same_or_not(head1, head2);

    else
        cout << "These two linked lists are not Same" << endl;
}