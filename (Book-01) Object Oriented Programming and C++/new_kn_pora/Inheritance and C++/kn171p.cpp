#include<bits/stdc++.h>
using namespace std;
class sample{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
        sample()
        {a=10;b=10;c=10;}
        void sumAll(){
            cout<<"a+b+c="<<a+b+c<<endl;
        }
};
int main(){
    sample smp;
    // smp.a=100;
    // smp.b=200;
    smp.c=300;
    smp.sumAll();
}