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
  cout<<" inserted value : 66 ";
  cout<<" index number is 2 ";

  for(i=5-2;i>=5;i--)
  {
  d[i+1]=d[i];
  }
  d[2]=66;
  cout<<"The stored array are : ";
  for(i=0;i<6;i++)
  {
    cout<<d[i]<<" ";
  }
  return 0;

}