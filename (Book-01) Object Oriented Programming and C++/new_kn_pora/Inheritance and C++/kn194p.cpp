#include<iostream>
using namespace std;
class A{
    protected:
        int i;
};
class B:virtual public A{
    //other codes goes here
};
class C:virtual public A{
    //other codes goes here
};
class D:public B,public C{
    public:
        void ShowVal(){
            i=10;
            cout<<i;
        }
};
int main()
{
    D d1;
    d1.ShowVal();
}