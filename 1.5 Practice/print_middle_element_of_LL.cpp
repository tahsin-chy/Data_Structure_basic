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


void check_duplicate(vector<int> dupli)
{
    int size = dupli.size();
    int mid = size / 2;
    
    if (size % 2 == 0)
    {
        cout << dupli[mid-1] <<" "<< dupli[mid] << endl;
    }

    else
    {
        cout << dupli[mid] << endl;
    }
}


void print_if_duplicate_exists(Node *head)
{
    Node *temp = head;
    vector<int> dupli;

    while (temp != NULL)
    {
        dupli.push_back(temp->val);
        temp = temp->next;
    }

    check_duplicate(dupli);
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

    print_if_duplicate_exists(head);

    return 0;
}