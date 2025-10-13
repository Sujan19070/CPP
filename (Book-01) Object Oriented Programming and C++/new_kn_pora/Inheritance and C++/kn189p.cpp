#include<bits/stdc++.h>
using namespace std;
class Base1{
    public:
        Base1(){cout<<"This constructor is from class Base1."<<endl;}
        ~Base1(){cout<<"This Destructor is form class Base1."<<endl;}

};
class Base2{
    public:
        Base2(){cout<<"This costructor is from class Base2."<<endl;}
        ~Base2(){cout<<"This Destructor is from class Base2."<<endl;}
};
class Base3{
    public:
        Base3(){cout<<"This constructor is from class Base3."<<endl;}
        ~Base3(){cout<<"This destructor is from class Base3."<<endl;}
};
class Derived:public Base1,public Base2,public Base3{
    public:
        Derived(){cout<<"Derived class constructor..."<<endl;}
        ~Derived(){cout<<"Derived class destructot..."<<endl;}

};
int main()
{
    Derived c1;

    return 0;
}