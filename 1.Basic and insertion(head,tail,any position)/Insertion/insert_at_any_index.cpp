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
void insert_at_any_index(Node *head, int idx, int val)
{
    Node *temp = head;
    Node *newnode = new Node(val);
    for (int i = 0; i < idx - 1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void print_ll(Node *head)
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
    Node *head = new Node(1);
    Node *a = new Node(2);
    Node *c = new Node(5);


    head->next = a;
    a->next = c;


    insert_at_any_index(head, 2, 4); // 2nd index e newnode insert
    insert_at_any_index(head, 2, 3); 

    print_ll(head);
    return 0;
}