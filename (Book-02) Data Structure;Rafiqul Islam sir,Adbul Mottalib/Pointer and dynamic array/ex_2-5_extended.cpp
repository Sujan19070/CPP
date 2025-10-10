#include<iostream>
using namespace std;
int main()
{
    int *d,i;
    d=new int[5];
  cout<<"Give element for dynamic array : ";
  for(i=0;i<5;i++)
  {
  cin>>d[i];
  }
  d[5]=99;//increasing size of array

  cout<<"The stored array are : ";
  for(i=0;i<6;i++)
  {
    cout<<d[i]<<" ";
  }
  return 0;

}