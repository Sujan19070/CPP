#include<iostream>
#include<conio.h>

using namespace std;
int main()
{   
    int C,sizeA,sizeB,A[sizeA],B[sizeB],M[C];
    
    cout<<"Give the first array size A : ";
    cin>>sizeA;
    A[sizeA];

    cout<<"Give elements for array A : ";
    for(int i=0;i<sizeA;i++)
    {
        cin>>A[i];
    }

    cout<<"The elements are : ";
    for(int i=0;i<sizeA;i++){
    cout<<A[i]<<" ";}
  /*
    cout<<"Give the second array size B : ";
    cin>>sizeB;
    B[sizeB];
    
    cout<<"Give elements for array B : ";
    for(int i=0;i<sizeB;i++)
    {
        cin>>B[i];
    } 
  
    cout<<"The elements are : ";
    for(int i=0;i<sizeB;i++)
    {
       cout<<B[i]<<" ";
    }

    C=sizeA+sizeB;

    for(int i=0;i<sizeA;i++)
    {
        M[i]=A[i];
    }

    for(int i=0;i<sizeB;i++)
    {
        M[i+sizeA]=B[i];
    }

    cout<<"The merge array is : ";
    for(int i=0;i<C;i++)
    {

        cout<<M[i]<<" ";
    }


*/


    getch();
    return 0;
}