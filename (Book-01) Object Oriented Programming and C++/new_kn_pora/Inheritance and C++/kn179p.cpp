#include<iostream>
using namespace std;
class base{
    public:
        base(){cout<<"Base constructor called..."<<endl;}
        ~base(){cout<<"Base destructor called..."<<endl;}
};
class derived:public base{
    public:
        derived(){cout<<"Derived constructor called..."<<endl;}
        ~derived(){cout<<"Derived destructor called..."<<endl;}
};
int main(){
    cout<<"Calling Constructors..."<<endl;
    derived d1;
    cout<<"Calling destructors..."<<endl;

    return 0;
}