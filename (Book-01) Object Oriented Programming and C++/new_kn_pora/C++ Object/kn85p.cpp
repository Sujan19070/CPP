#include<iostream>
using namespace std;

class classA{
    
    public:
        int a,b;
        void add_ab(void)
        {
            cout<<" a + b : "<<a+b<<endl;
        }
};

classA a1;                         //a1 is globally declared object or instance

void f1(void){
    cout<<"in f(): {a=15,b=15}"<<endl;
    a1.a=15;
    a1.b=15;
    a1.add_ab();
}
int main(){
    cout<<"in main(): {a=5,b=5}"<<endl;
    a1.a=5;
    a1.b=5;
    a1.add_ab();
    f1();

    return 0;

}