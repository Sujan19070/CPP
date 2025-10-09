#include<iostream>
using namespace std;
class classA{
    public:
        int a,b;
        void add_ab(void)
        {
            cout<<"a + b : "<<a+b<<endl;
        }
};
int main(){
    classA a1,a2;
    a1.a=5;
    a1.b=5;
    a2=a1;         // bitwise copy= copy all member variable form one object to another object
    a1.a=10;
    a1.add_ab();
    a2.add_ab();
}