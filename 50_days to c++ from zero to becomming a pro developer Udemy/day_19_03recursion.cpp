#include<iostream>
using namespace std;

int factorial(int num)
{
    int temp;
    if(num==1)
    return 1;
    else
    temp = num * factorial(num-1);
    return temp;

}
int main()
{
    int num;
    int fact;
    cout<<"Enter the number : "<<endl;
    cin>>num;

    if(num<0)
    {
        cout<<"Enter a positive number."<<endl;
    }
    else
    {
        cout<<"The factoria is : "<<factorial(num)<<endl;
    }
}