#include<bits/stdc++.h>
using namespace std;
class A{
    public:
        A(){cout<<"This constructor is from class A."<<endl;}
        ~A(){cout<<"This Destructor is form class A."<<endl;}

};
class B:public A{
    public:
        B(){cout<<"This costructor is from class B."<<endl;}
        ~B(){cout<<"This Destructor is from class B."<<endl;}
};
class C:public B{
    public:
        C(){cout<<"This constructor is from class C."<<endl;}
        ~C(){cout<<"This destructor is from class C."<<endl;}
};
int main()
{
    C c1;

    return 0;
}