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

// deleting the tail

void delete_at_tail(Node *head, Node *&tail, int tail_index) // Passing tail by reference because it will be completely deleted
{
    Node *tmp = head;

    for (int i = 0; i < tail_index - 1; i++)
    {
        tmp = tmp->next;
    }

    Node *deletenode = tmp->next;
    tmp->next = tmp->next->next; // temp->next pointing to NULL(which is at tail->next)
    delete deletenode;
    tail = tmp;
}

// printing the linked list

void print(Node *head)
{
    Node *temp = head;
    cout << "Printing Linked list : ";

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}


int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = new Node(40);

    head->next = a;
    a->next = b;
    b->next = tail;

    cout << "Tail before deleting : " << tail->val << endl;
    delete_at_tail(head, tail, 3); // In zero-based indexing, the tail is at  3
    cout << "Tail after deleting : " << tail->val << endl;

    print(head);
    
    return 0;
}
