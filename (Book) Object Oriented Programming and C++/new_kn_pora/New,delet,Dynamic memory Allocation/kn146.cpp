#include<bits/stdc++.h>
using namespace std;
class Sample{
    int i;
    public:
        Sample()
        {cout<<"Constructing..."<<endl;}
        void SetI(int x)
        {i=x;}
        int GetI()
        {return i;}
        ~Sample()
        {cout<<"Destructing..."<<endl;}

};
int main()
{
    Sample *ptr;
    ptr = new Sample;
    ptr->SetI(50);
    cout<<"Value of I : "<<ptr->GetI()<<endl;
    delete  ptr;
}