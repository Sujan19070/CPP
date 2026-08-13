#include<iostream>
using namespace std;
int sum;
int addition(int a,int b);

int main()
{
    addition(2,3);
    cout<<sum;

    return 0;
}

int addition(int x,int y)
{
    sum = x + y;
    return sum;

}