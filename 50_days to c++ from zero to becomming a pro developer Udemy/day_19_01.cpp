#include<iostream>
using namespace std;
int x =10;
int y= 20;
void changevalue(int& ,int&);
int main()
{
    cout<<"Before calling the function values are : "<<endl;
  
    changevalue(x,y);
  cout<<x<<endl;
    cout<<y<<endl;


}
void changevalue(int &x,int &y)
{
    x = x + 10;
    y = y +20 ;

   /*cout<<endl<<endl;
    cout<<"Inside the changevalue method:"<<endl;
    cout<<x<<endl;
    cout<<y<<endl;*/
}