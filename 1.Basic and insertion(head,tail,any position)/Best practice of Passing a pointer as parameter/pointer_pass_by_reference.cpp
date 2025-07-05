#include <bits/stdc++.h>
using namespace std;

void fun(int *&q)
{ 
    q =NULL;
    cout << "In fun : " << &q << endl; // p = p of main function, thats why address is same in both main and fun function
   
}
int main()
{
    int x = 10;
    int *p = &x;
    fun(p);
    cout << "In main : " << &p << endl;

    return 0;
}