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

// Inserting inputs in linked list

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newnode = new Node(value);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}

// deleting the tail

void delete_at_tail(Node *head, int tail_index)
{
    Node *tmp = head;

    for (int i = 0; i < tail_index - 1; i++)
    {
        tmp = tmp->next;
    }

    Node *deletenode = tmp->next;
    tmp->next = NULL;
    delete deletenode;
}

// printing the linked list

void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}


int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;

    while (1)
    {
        cin >> val;

        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    delete_at_tail(head, 3);
    print(head);
    return 0;
}