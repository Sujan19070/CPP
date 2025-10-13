#include<bits/stdc++.h>
using namespace std;
class base{
    public:
        void ShowMsg()
        {cout<<"This msg is displays from Base class"<<endl;}

};
class derive:public base{
    public:
        void ShowMsg()
        {
            cout<<"This msg is displays from derive class"<<endl;
        }

};
int main()
{
    derive d1;
    d1.ShowMsg();
}
