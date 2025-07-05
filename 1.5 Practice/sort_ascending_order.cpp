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

void print_if_duplicate_exists(Node *head)
{
    Node *temp = head;
    vector<int> convert_in_vec;
    while (temp != NULL)
    {
        convert_in_vec.push_back(temp->val);
        temp = temp->next;
    }
    
    sort(convert_in_vec.begin(), convert_in_vec.end());

    for (auto a : convert_in_vec)
    {
        cout << a << " ";
    }
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