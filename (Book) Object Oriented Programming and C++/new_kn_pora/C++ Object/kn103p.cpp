#include<iostream>
using namespace std;
class classA{
    int a,b;
    public:
        classA(int x,int y)
        {a=x;b=y;}

        add_AB(void)
        {return a+b;}
};
void funcA(classA obj)
{
    int getObjValue;
    getObjValue = obj.add_AB();
    cout<<"Multiple return value with 5 gives : "<<getObjValue*5<<endl;
}
int main(){

    classA ob1(5,15);
    funcA(ob1);
}