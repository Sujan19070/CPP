#include<iostream>
using namespace std;

class udemy
{
    public:
      int length;
      int height;
      udemy()
      {
        cout<<"Constructor with no argurment is called"<<endl;
      }
      udemy(int x)
      {
        cout<<"constructor with 1 arguement is called"<<endl;
      }
      udemy(int x,int y)
      {
        cout<<"constructor with 2 arguement is called"<<endl;
      }
      /*udemy(int x,int y)        // declaring constructor
      {
        length = x;
        height = y;
      }*/
     

};


int main()
{

    udemy op(1,2);
   
    /*udemy op(23,24);
    cout<<"Lenght is : "<<op.length<<endl;
    cout<<"Height is : "<<op.height;
    */
}