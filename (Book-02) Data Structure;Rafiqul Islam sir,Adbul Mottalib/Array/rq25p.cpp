#include<iostream>
using namespace std;
int main()
{
    int *b,i;
    b = new int[5];
    for(i=0;i<5;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<"Elements : "<<b[i]<<" ";
    }
}