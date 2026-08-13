#include<iostream>
using namespace std;

class udemy
{
    public:
      int length;
      int height;
      /*udemy()        // declaring constructor
      {
        length = 10;
        height = 20;
      }*/
     udemy();

};
//we can also declare constructor outside the class using scope resulation operator
udemy::udemy()
{
    length =10;
    height =20;
}

int main()
{
    udemy op;
    cout<<"Lenght is : "<<op.length<<endl;
    cout<<"Height is : "<<op.height;
}