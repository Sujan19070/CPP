#include<bits/stdc++.h>
using namespace std;
class X{
    int x;
    public:
        X(){cout<<"Constructinn..."<<endl;}
        void SetX(int a)
        {
            x=a;
        }
        int GetX(void)
        {return x;}
        ~X(){cout<<"\nDestructing..."<<endl;}
    };

void func(X *x)
{
    cout<<"Value of x from main() : "<<x->GetX()<<endl;
    x->SetX(15);
    cout<<"Value of x in func()   : "<<x->GetX()<<endl;
}
int main()
{
    X x1;
    x1.SetX(10);
    func(&x1);
    cout<<"\nAfter calling func(), x is : "<<x1.GetX()<<endl;

}