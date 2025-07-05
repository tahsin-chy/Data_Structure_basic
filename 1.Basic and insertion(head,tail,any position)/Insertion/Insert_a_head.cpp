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

void insert_new_node(Node* &head,int val){
    Node* newnode=new Node(val);
    newnode->next=head;
    head=newnode;

}
void print_LL(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<endl;
        temp=temp->next;
    }
}
int main() {
Node* head=new Node(1);
Node* b=new Node(2);
Node* tail=new Node(3);
head->next=b;
b->next=tail;
insert_new_node(head,120);
print_LL(head);
return 0;

}