#include<bits/stdc++.h>
using namespace std;
int Add(int a,int b);
double Add(double a,double b);
int main()
{
    int ix = Add(20,30);
    int fx = Add(44.63,64.23);

    cout<<"\n\t"<<ix<<"\t"<<fx<<endl;
}
int Add(int a,int b)
{
    return a+b;
}
double Add(double a,double b)
{
    return a+b;
}