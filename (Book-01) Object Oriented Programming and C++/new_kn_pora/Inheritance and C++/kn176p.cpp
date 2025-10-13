#include<bits/stdc++.h>
using namespace std;
class base{
    public:
        int b;
        base(){b=10;}
        void showMemValueBase(){cout<<b<<endl;}
};
class derive:public base{
    public:
        int d;
        derive(){b=50;d=100;}
        void showMemValueDerive(){cout<<b<<" "<<d;}
};
int main()
{
    base b1;
    derive d1;
    d1.showMemValueBase();
    b1.showMemValueBase();
    d1.showMemValueDerive();
}