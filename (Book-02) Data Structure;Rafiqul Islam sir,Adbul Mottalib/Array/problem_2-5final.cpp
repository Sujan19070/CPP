#include<iostream>
#include<conio.h>

using namespace std;
int main()
{    

    //last er index faka rakha nia code question ke totally satisfy kore nah



    int size,x,k,p;
    cout<<"Enter the size of Array : ";
    cin>>size;
    int A[size];

    for(int i=0;i<size;i++)
    {
        cout<<"Give elements for "<<i+1 <<" no array : ";
        cin>>A[i];
    }
    cout<<"Which value you want to put into x : ";
    cin>>x;
    cout<<"In which index you want put into value k : ";
    cin>>p;
    k=p-1;

    //putting into value now
    for(int i=size-2;i>=k;i--)
    {
        A[i+1] = A[i];
       
    }
     A[k] = x;
    for(int i=0;i<size;i++)
    {cout<<A[i]<<" ";

    }
    getch();
    return 0;
}