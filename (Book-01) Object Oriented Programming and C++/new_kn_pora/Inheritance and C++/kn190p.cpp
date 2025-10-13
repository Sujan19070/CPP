#include<bits/stdc++.h>
using namespace std;
class A{
    int x;
    public:
        A(int i)
        {
            x=i;
            cout<<"Value of X in class A : "<<x<<endl;
        }
};
class B{
    int x,y;
    public:
        B(int i,int j)
        {
            x=i;
            y=j;
            cout<<"Value of X and Y in class B :"<<x<<" "<<y<<endl;
        }
};
class C{

    public:
        C()
        {
            cout<<"This is C constructor."<<endl;
        }
};
class Derived:public A,public B,public C{
    int x,y,z;
    public:
      Derived(int i,int j,int k):A(10),B(20,200)
      {
        x=i;
        y=j;
        z=k;
        cout<<"Value of X,Y and Z in Derived : "<<x<<" "<<y<<" "<<z<<endl;
      }

};
int main()
{
    Derived d1(3,30,300);

    return 0;

}