#include<iostream>
using namespace std;
struct{
    int u;
    int v;
    int va;
} ra[10];

int main()
{
    int m[4][4]={{0,10,0,8},
                {10,0,6,0},
                {0,6,0,12},
                {8,0,12,0}}
    ;
   int k = 0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(m[i][j]!=0)
            {
                ra[k].u=i;
                ra[k].v=j;
                ra[k].va=m[i][j];
                k++;
            }
        }
    }
    for(int i=0;i<k;i++)
    {
        cout<<"u : "<<ra[i].u<<" v : "<<ra[i].v<<" value : "<<ra[i].va<<endl;
    }
    return 0;
}