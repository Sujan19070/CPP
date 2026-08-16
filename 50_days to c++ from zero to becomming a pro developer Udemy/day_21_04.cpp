#include<iostream>
using namespace std;

class udemy{

    public:
      int a;
      int b;

    private:
      int c;
      int d;

    protected:
      int e;
      int f;    
};
int main()
{
    udemy ob;
    ob.a = 10;
    ob.b =20;
    cout<<" hihi : "<<ob.a<<" "<<ob.b;
}