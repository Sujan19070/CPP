#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter an integer :"<<endl;
    cin>>number;
    if(number>0)
    {
        cout<<"Greater than 0"<<endl;

    }
    else if( number < 0)
    {
        cout<<"Less than 0"<<endl;

    }
    else if(number == 0)
    {
        cout<<"You entered 0"<<endl;
    }
}