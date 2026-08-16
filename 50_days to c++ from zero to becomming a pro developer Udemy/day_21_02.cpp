#include<iostream>
using namespace std;
class udemy{
    public:
     double height;
     double length;


};

int main()
{
    udemy op;
    udemy op1;

    op.height = 10;
    op.length = 20;

    op1.height = 30;
    op1.length = 40;

    double product_op = op.height * op.length;
    double product_op1= op1.height* op1.length;

    cout<<"The product of object op is : "<<product_op<<endl;
    cout<<"The product of object op1 is : "<<product_op1<<endl;

}