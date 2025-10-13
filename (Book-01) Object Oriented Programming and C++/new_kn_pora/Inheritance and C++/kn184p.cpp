#include<bits/stdc++.h>
using namespace std;
class A{
    public:
        void ShowMsgA()
        {
            cout<<"This msg is from class A."<<endl;
        }

};
class B:public A{
    public:
        void ShowMsgB()
        {
            cout<<"This msg is from class B."<<endl;
        }
};
class C:public B{
    public:
        void ShowMsgC()
        {
            cout<<"This msg is from class C."<<endl;
        }
};
int main(){
    C c1;
    c1.ShowMsgA();
    c1.ShowMsgB();
    c1.ShowMsgC();

    return 0;
}