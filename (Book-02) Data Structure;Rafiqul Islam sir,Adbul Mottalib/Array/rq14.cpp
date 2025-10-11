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
        cout<<"Enter values for "<<i+1<<" no Array : ";
        cin>>A[i];
    }

    int x;
    cout<<"Which value you want to find : ";
    cin>>x;
    int flag = 0;
    int location = 0; // Initialize location variable
    for(int i=0;i<size;i++)
    {
        if(A[i]==x)
        {
            location = i;
            flag = 1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"Found"<<endl;
        cout<<"Location (index no.): "<<location<<endl;
    }
    else
    {
        cout<<"Not Found."<<endl;
    }

    return 0;
}