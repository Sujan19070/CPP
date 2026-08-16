#include<iostream>
using namespace std;
int main()
{
    int i,*a,*b;
    a = new int[10];
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    b = new int[7]; // Allocate memory for b before using it
    for(i=0;i<7;i++)
    {
        b[i]=a[i];
    }
    delete []a;
    for(i=0;i<7;i++)
    {
        cout<<b[i]<<" ";
    }
    // delete []b; // Free allocated memory
    return 0;
}   
