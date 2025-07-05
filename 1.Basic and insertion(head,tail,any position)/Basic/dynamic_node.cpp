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
int main() {
   Node* Head=new Node(10);
   Node* a=new Node(20);
   Node* Tail=new Node(30);

   Head->next=a;  //a is pointer which already holds address .. Thats why it doesn't need to write &a
   a->next=Tail;
   cout<<Head->val<<" "<<Head->next<<endl;
   cout<<a->val<<" "<<a->next<<endl;
   cout<<Tail->val<<" "<<Tail->next<<endl;
   

   
return 0;

}