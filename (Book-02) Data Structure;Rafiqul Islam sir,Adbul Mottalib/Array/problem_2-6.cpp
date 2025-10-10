#include<iostream>
#include<conio.h>
using namespace std;
int main()
{  

    int A[5]={11,22,33,44,55};

    for(int i=2;i<5;i++)
    {
    A[i]=A[i+1];
    }
    
    cout<<"Elements are : ";
    for(int i=0;i<5;i++)
    {
    cout<<A[i]<<" ";
    }
    getch ();
    return 0;
}