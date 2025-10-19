#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  flag,p=6,A[6] = {1, 2, 3, 4, 5, 6},B[4] = {5, 6, 7, 8},C[10];
    for(int i=0;i<6;i++)
    {
        C[i]=A[i];
    }
    for(int i=0;i<4;i++)
    {
        flag = 0;
        for(int j=0;j<6;j++)
        {
            if(A[j]==B[i])
            {
                flag = 1; //for equal items flag =1
                break;
            }
        }
        if(flag==0)
        {
            C[p]=B[i];
            p++;
        }
    }
    for(int i=0;i<p;i++)
    {
        cout<<C[i]<<" ";
    }
    return 0;
}