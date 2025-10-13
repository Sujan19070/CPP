#include<bits/stdc++.h>
using namespace std;
class Base1{
    public:
        void ShowMsgBase1() 
         {cout<<"This is Base1 class."<<endl;}
};
class Base2{
    public:
        void ShowMsgBase2()
        {
            cout<<"This is Base2 class."<<endl;
        }
};
class Base3{
    public:
    void ShowMsgBase3()
    {
        cout<<"This is Base3 class."<<endl;
    }
}; 
class Derived:public Base1,private Base2,public Base3{
    public:
        void    ShowDerivedMsg()
        {
            cout<<"This msg is from derived class."<<endl;
        }
};
int main()
{
    Derived d1;
    d1.ShowMsgBase1();
    d1.ShowMsgBase3();
    d1.ShowDerivedMsg();

    return 0;
}