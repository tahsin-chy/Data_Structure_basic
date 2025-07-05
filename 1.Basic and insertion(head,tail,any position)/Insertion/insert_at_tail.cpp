#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void insert_at_tail(Node* &head,int val){
    Node* newnode=new Node(val);
    
    if(head==NULL){
        head=newnode;
    }
    Node* tmp=head;
    
   while(tmp->next!=NULL){
    tmp=tmp->next;
   }
   tmp->next=newnode;
   
}
void print_new_ll(Node* head){

    Node* temp=head;
   
    while(temp!=NULL){
        cout<<temp->val<<endl;
        temp=temp->next;
    }
}
int main() {
   Node* head=new Node(10);
   Node* b=new Node(20);
   Node* tail=new Node(30);

   head->next=b;
   b->next=tail;

   insert_at_tail(head,120);
   insert_at_tail(head,130);
   insert_at_tail(head,140);


print_new_ll(head);
return 0;

}