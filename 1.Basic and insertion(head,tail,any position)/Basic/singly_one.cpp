#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int val;
    node* next;

};
int main() {
   node a,b,c;
   a.val=10;
   b.val=20;
   c.val=30;

a.next=&b;
b.next=&c;
c.next=NULL;

cout<<a.val<<" "<<a.next<<endl;

//Last Value print using first node
cout<<(*(*a.next).next).val<<endl; 
cout<<a.next->next->val<<endl;
cout<<a.next->next<<endl;


return 0;

}