#include<iostream>

using namespace std;
int main()
{
    int size;
    cin>>size;
    int A[size];//taking input from user
    
    


    for(int i=0;i<size;i++)
    {
        cout<<"Give 10 elements for array : "<<i+1<<" : ";
        cin>>A[i]; 
        
    }
    
    int smallest= A[0];
    for(int i=1;i<size;i++)
    {
        if(A[i]<smallest)
        {
            smallest = A[i];
        }
    }
    cout<<"The smallest number is : "<<smallest<<endl;
    return 0;
}