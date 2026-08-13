#include<iostream>
using namespace std;

void X(int);
void X(float);

int main()
{
    float b = 4.5;
    X(4);
    X(b);
    X(5);
}

void X(int a)
{
    cout<<"Integer Function called"<<endl;
}

void X(float b)
{
    cout<<"Float Function called"<<endl;
}