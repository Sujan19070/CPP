#include<iostream>
using namespace std;
int main()
{
    int *p;
    p = new int;
    *p=12;
    cout<<p<<endl;
    cout<<*p;
}