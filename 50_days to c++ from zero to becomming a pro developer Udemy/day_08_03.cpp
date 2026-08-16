#include<iostream>
using namespace std;
int main()
{
    char grade = 'A';
    switch(grade)
    {
        case 'A':
            cout<<"Amazing job"<<endl;
            break;

        case 'B':
            cout<<"Good job"<<endl;
            break;

        case 'C':
            cout<<"Fair job"<<endl;
            break;

        case 'D':
            cout<<"Try harder"<<endl;
            break;

        case 'F':
            cout<<"Never try again"<<endl;
            break;

        default:
           cout<<"Invalid Grade enter point."<<endl;                
    }
}