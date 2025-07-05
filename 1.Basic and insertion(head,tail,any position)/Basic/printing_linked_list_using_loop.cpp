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
int main()
{
    Node *Head = new Node(10);
    Node *a = new Node(20);
    Node *Tail = new Node(30);
    Head->next=a;
    a->next=Tail;
    

    // Wrong process
    // while (Head != NULL)
    // {
    //     cout << Head->val << endl;
    //     Head = Head->next;
    // }

    // Correct process

    Node*temp=Head;
    while(temp!=NULL){
        cout<<temp->val<<endl;
        temp=temp->next;
    }

    //NOTE:   Out of loop temp will be Zero

    return 0;
}