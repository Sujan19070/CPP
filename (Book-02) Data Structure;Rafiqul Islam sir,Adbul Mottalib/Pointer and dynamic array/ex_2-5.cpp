#include<iostream>
using namespace std;
int main()
{
    int *b,i;
    b=new int[5];
  cout<<"Give element for dynamic array : ";
  
  
  for(i=0;i<5;i++)
  {
  cin>>b[i];
  }

  cout<<"The stored array are : ";
  for(i=0;i<5;i++)
  {
    cout<<b[i]<<" ";
  }
  return 0;

}