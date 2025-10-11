#include<iostream>
using namespace std;
int main()
{  
   int size;
   cout<<"Enter the size of Array : ";
   cin>>size;

   int A[size],sum_odd=0,sum_even=0;
   for(int i=0;i<size;i++)
   { 
    cout<<"Give elements for "<<i+1<< " no array : ";
    cin>>A[i];
   }

   for(int i=0;i<size;i++)
   {

    if(A[i]%2==0)
    {
        sum_even=sum_even + A[i];
    }
    else
    {
        sum_odd=sum_odd+A[i];
    }

    
   }
    cout<<"Total summation of all even number in this Array : "<< sum_even<<endl;
    cout<<"Total summation of all odd number in this Array : "<< sum_odd;

    return 0;
}
