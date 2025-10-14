#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int *b,i,x,k,n;
    cout<<"Enter the dynamic array size, n: ";
    cin>>n;
    cout<<"Enter the array elements : ";
    b = new int[n];
    for(int i=0;i<n;i++)
    cin>>b[i];
    cout<<"Enter the value you want to insert, x: ";
    cin>>x;
    cout<<"Enter the index no, k: ";
    cin>>k;
    for(i=n-1;i>=k;i--)
    {
        b[i+1]=b[i];
    }
    b[k]=x;

    for(i=0;i<n+1;i++)
    {
        cout<<b[i]<<" ";
    }
}