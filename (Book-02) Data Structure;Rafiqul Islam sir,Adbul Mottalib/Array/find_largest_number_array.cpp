#include<iostream>

using namespace std;
int main()
{
    int A[10];

    for(int i=0;i<10;i++)
    {
        cout<<"Give 10 elements for array : "<<i+1<<" : ";
        cin>>A[i]; 
        
    }
    
    int largest = A[0];
    for(int i=1;i<10;i++)
    {
        if(A[i]>largest)
        {
            largest = A[i];
        }
    }
    cout<<"The largest number is : "<<largest<<endl;
    return 0;
}