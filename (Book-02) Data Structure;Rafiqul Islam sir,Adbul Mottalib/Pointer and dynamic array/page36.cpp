#include<iostream>
using namespace std;
int main()
{
     int i,j,sum=0,A[6][5]={
        {1,2,3,4,5},
        {7,8,9,10,11},
        {13,14,15,16,17},
        {19,20,21,22,23},
        {25,26,27,28,29},
        {30,31,32,33,34}
                  };
     for(i=0;i<5;i++)
     {
        for(j=0;i<6;j++)
        {
            if(i==0||j==0||i==4||j==5)
            sum=sum+A[i][j];
        }
     }
     cout<<sum;

     cout<<" Sum of all side values : ";

    return 0;
}