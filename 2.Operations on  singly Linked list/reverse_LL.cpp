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
void reverse_print(Node* tmp){
    if(tmp==NULL){
        return;
    }
    reverse_print(tmp->next);
    cout<<tmp->val<<endl;
}

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

    reverse_print(head);
    return 0;
}