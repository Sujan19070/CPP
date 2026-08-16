#include<bits/stdc++.h>
using namespace std;
struct{
    int u;
    int v;
    int va;
} ra[10];

int main(){
for(int i=0;i<4;i++)
{
    cout<<"Enter Roll no for student "<<i+1<<end;
    cin>>ra[i].u;
    cout<<"Enter Name for student "<<i+1<<end;
    cin>>ra[i].v;
    cout<<"Enter marks for student "<<i+1<<end;
    cin>>ra[i].va;
}

int m[][];
for(int i=0;i<4;i++)
{
    for(int j=0;i<4;j++)
    {
        if(m[i][j]!=0)
        {
            stud[k].roll=i;
            stud[k].name[]=j;
            stud[k].marks=m[i][j];
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