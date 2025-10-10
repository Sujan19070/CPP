#include<iostream>
#include<conio.h>

using namespace std;
int main()
{

    int A[5]={11,22,33,44,55};
    int B[4]={66,77,88,99};

    int M[9];

    for(int i=0;i<5;i++)
    {
        M[i]=A[i];
    }
    for(int i=0;i<4;i++)
    {

        M[i+5]=B[i];
    }

    cout<<"The merge array is : ";
    for(int i=0;i<9;i++)
    {
        cout<<M[i]<<" ";
    }
    
    getch();
    return 0;
}