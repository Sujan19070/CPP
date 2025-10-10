#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int A[6]={11,12,13,14,15};
    
    for(int i=6-2;i>=3;i--)
    {
        A[i+1] = A[i];
        
    }
    A[3] = 66;
    for(int i=0;i<6;i++)
    {
        cout<<A[i]<<" ";

    }
    getch();
    return 0;
}