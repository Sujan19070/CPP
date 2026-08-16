#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[3][4]={{1,2,3,4},
                 {5,6,7,8},
                 {9,10,11,12}};
    int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i==0 ||j==0 ||i==3 ||j==4)
            {
                sum+=A[i][j]+sum;
            }
        }
    }
    cout<<"Sum of all boundary elements : "<<sum;
}