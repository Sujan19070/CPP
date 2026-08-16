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
    cout<<"Enter the no : ";
    cin>>num;
    if(num<0)
    {
        cout<<"Enter a positive integer : ";

    }
    else 
    {
        cout<<"The factorial is : "<<factorial(num)<<endl;
    }

}