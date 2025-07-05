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

void insert_at_tail_optimized(Node *&head, Node *&tail, int val)
{

    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
    // tail=newnodena korle o thik thak vabe linked list ta print kora jabe
    // but main er vitore jdi tail er man print korte jai tahole age j tail chilo tar man(30) print korbe
    // tail e j notun node insert korci tar man(40) print korbe na
    // ek kothay tail er man update hbe na ...........*
}

void Print(Node *head)
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
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);
    head->next = a;
    a->next = tail;
    insert_at_tail_optimized(head, tail, 40);
    Print(head);

    return 0;
}
