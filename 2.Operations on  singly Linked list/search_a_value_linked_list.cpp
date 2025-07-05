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
    }

    tail->next = newnode;
    tail = newnode;
}

void search(Node *head, int querie)
{
    Node *tmp = head;
    int idx = 0;
    while (tmp != NULL)
    {
        if (tmp->val == querie)
        {
            cout << idx << endl;
            return;
        }
        idx++;
        tmp = tmp->next;
    }

    cout << "-1" << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int node_num;
    cin >> node_num;
    int x;

    for (int i = 0; i < node_num; i++)
    {
        cin >> x;
        insert_at_tail(head, tail, x);
    }

    int querie;
    cin >> querie;

    search(head, querie);
}