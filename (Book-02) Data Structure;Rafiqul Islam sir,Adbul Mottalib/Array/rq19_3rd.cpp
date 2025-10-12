#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[10]={1,2,3,4,5,6,7,8,9,10};
    int B[10]={11,12,13,14,15,16,17,18,19,20};
    int M[20];
    for(int i=0;i<10;i++)
    {
        M[i]=A[i];
    }
    for(int i=0;i<20;i++)
    {
        M[i+10]=B[i];
    }
    cout<<"The merged array : ";
    for(int i=0;i<20;i++)
    {
        cout<<M[i]<<" ";
    }

    return 0;
}