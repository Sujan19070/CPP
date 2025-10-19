#include<bits/stdc++.h>
using namespace std;
int Add(int a,int b);
double Add(double a,double b);
int main()
{
    int ix = Add(20,30);
    double fx = Add(44.44,41.22);
    cout<<"ix : "<<ix<<" fx : "<<fx;

    return 0;
}
int Add(int a,int b)
{
    return a+b;
}
double Add(double a,double b)
{
    return a+b;
}
