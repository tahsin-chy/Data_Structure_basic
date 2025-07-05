#include <bits/stdc++.h>
using namespace std;


// void fun(int* p){
//     *p=100; //dereferencing p to 100
//     cout<<"In Fun : "<<*p<<endl;
// }
// int main() {
//    int x=20;
//    int* p=&x;
//    fun(p);
//    cout<<"In Main : "<<*p<<endl;



// return 0;

// }

//then why not the outputs same here?

void fun(int *p){
    int y=300;
    p=&y;
    cout<<"In Fun : "<<*p<<endl;
}
int main(){
    int x=10;
    int* p=&x;
    fun(p);
    cout<<"In Main : "<<*p<<endl;
}

