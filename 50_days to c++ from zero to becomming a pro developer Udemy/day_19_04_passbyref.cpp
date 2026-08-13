#include<iostream>
using namespace std;

int x = 10;
int y = 20;

void changevalues(int&,int&);

int main()
{
    cout<<"Before calling the function values are as : "<<endl;
    cout<<x<<endl;
    cout<<y<<endl;
    changevalues(x,y);
    cout<<endl<<endl;
    cout<<" After changing the values in the function the original values are : "<<endl;
    cout<<x<<endl;
    cout<<y<<endl;

}

void changevalues(int &x,int &y) //receinving memory location .... age bosbe & eita
{
    x = x + 10;
    y = y + 20;
}