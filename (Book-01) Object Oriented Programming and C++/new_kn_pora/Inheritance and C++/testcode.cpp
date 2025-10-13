#include<bits/stdc++.h>
using namespace std;
class base{
    public:
      base(){cout<<"Base class constructor..."<<endl;}
      ~base(){cout<<"Base class destructor..."<<endl;}
};
class derived1:public base{
    public:
       derived1(){cout<<"derived1 class constructor..."<<endl;}
       ~derived1(){cout<<"derived1 class destructor..."<<endl;}
};
class derived2:public base{
    public:
       derived2(){cout<<"derived2 class constructor..."<<endl;}
       ~derived2(){cout<<"derived2 class destructor..."<<endl;}
};
class derived3:public base{
    public:
       derived3(){cout<<"derived3 class constructor..."<<endl;}
       ~derived3(){cout<<"derived3 class destructor..."<<endl;}
};
class derived4:public base{
    public:
       derived4(){cout<<"derived4 class constructor..."<<endl;}
       ~derived4(){cout<<"derived4 class destructor..."<<endl;}
};
int main()
{
    derived1 d1;
    derived2 d2;
    derived3 d3;
    derived4 d4;
}