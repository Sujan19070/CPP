#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int s;
    s = a+ b;
    return s;
}

int main()
{
    int x,y;
    cin>>x;
    cin >>y;
    cout<<"See the summation : ";
    cout<<sum(x,y);
}