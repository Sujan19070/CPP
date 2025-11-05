#include<bits/stdc++.h>
using namespace std;
int Add(int a,int b);
double Add(double a,double b);
int main()
{
    int ix = Add(20,30);
    int fx = Add(float(22.7),float(23.55));

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