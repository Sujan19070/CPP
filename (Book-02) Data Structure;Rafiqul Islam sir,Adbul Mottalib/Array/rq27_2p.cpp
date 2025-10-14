#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *b,i,x=888,k=3;
    b = new int[5];
    for(int i=0;i<6;i++)
    cin>>b[i];
//we want to insert 888 in 3rd index
    for(i=6-1;i>=k;i--)
    {
        b[i+1]=b[i];
    }
    b[k]=x;

    for(i=0;i<7;i++)
    {
        cout<<b[i]<<" ";
    }
}