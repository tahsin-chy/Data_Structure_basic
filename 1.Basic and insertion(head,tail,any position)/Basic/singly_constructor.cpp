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
        this->next = NULL;   //initially shb  NULL thakbe
                                  
    }
};
int main()
{
    Node a(10),b(20),c(30);
    a.next=&a;
    b.next=&b;
    cout<<a.val<<endl<<b.val<<endl<<c.val<<endl;
    cout<<(long long int)a.next<<endl<<(long long int)b.next<<endl<<c.next<<endl;
  

    return 0;
}