#include<iostream>
using namespace std;
int main(){
    int size,x,k,p;
    cout<<"Enter the size of array : ";
    cin>>size;
    int A[size];
    for(int i=0;i<size-1;i++)
    {
        cout<<"Enter the array elements : ";
        cin>>A[i];
    }
    cout<<"Enter the position where you want to insert : ";
    cin>>p;
    k=p-1;
    cout<<"Enter the element you want to insert : ";
    cin>>x;
    for(int i=size-2;i>=k;i--)
    {
        A[i+1]=A[i];
    }
    A[k]=x;
    for(int i=0;i<size;i++)
    {
        cout<<A[i]<<" ";

    }
}