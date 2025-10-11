#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the array size: ";
    int x,p,k,size;
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"Enter the element you want to insert : ";
    cin>>x;
    cout<<"Enter the position you want to insert: ";
    cin>>p;
    k = p - 1;
    array[k] = x;
    cout<<"After insertion updated elements are : ";
    for(int i = 0; i < size; i++)
    for(int i;i<size;i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}