#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[3]={1,2,3},B[5]={4,5,6,7,8},C[8],p;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(C[j]==B[i])
            {
                ++p;
                C[p]=B[i];
                break;
            }
        }
    }
    for(int i=0;i<8;i++)
    {
        cout<<C[i]<<" ";
    }

}