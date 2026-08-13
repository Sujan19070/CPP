#include<iostream>
using namespace std;
class Tutorial
{
    public:
      Tutorial()
      {
        cout<<"This is constructor. "<<endl;
      }
      void display()
      {
        cout<<"This is display function."<<endl;
      }
      ~Tutorial()
      {
        cout<<"This is destructor.";
      }

};
int main()
{
    Tutorial t;
    t.display();
}
