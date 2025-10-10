#include<iostream>
using namespace std;
int main()
{   
    int size;
    cout<<"Enter the size of Array : ";
    cin>>size;
    int A[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Give values for "<<i+1<<" no Array  : ";
        cin>>A[i];
    }
    int x;
    cout<<"Which value you want to find : ";
    cin>>x;
    int flag=0;

    for(int i=0;i<6;i++)
    {
        if(A[i]==x){
       int location = i;flag = 1;
       break;}
       
    }
    if(flag==1)
    {
        cout<<"Found";
    }
    else
    {
        cout<<"Not Found";
    }


    return 0;
}