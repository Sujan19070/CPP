#include<iostream>
using namespace std;
class base{
    public:
         void showMsg()
         {cout<<"This msg is from base class."<<endl;}

};
class derive:public base{
    public:
        void showMsg()
        {
            cout<<"This msg from derive class."<<endl;
        }
};
int main()
{
    derive d1;
    d1.base::showMsg();
}