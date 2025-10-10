#include<iostream>
using namespace std;

class classA{
        int a,b;                //private member variable
    public:
        classA(int x,int y)     //constructor
        {a=x;b=y;}    
        void add_AB()
        {cout<<"a+b = "<<a+b;}   //member function

};
int main()
{
    classA a1(5,10);            //creating object of type classA
    a1.add_AB();

}