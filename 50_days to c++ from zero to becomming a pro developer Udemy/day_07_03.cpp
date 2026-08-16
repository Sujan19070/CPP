#include<iostream>
using namespace std;
int main()
{
    char grade;
    cout<<"Enter Your grade:";
    cin>>grade;
    switch(grade)
    {
        case 'A':
            cout<<"Amazing job."<<endl;
            break;
        case 'B':
            cout<<"Good Job"<<endl;
            break;
        case 'C':
            cout<<"Fair Job"<<endl;
            break;
        case 'D':
            cout<<"Try Harder"<<endl;
            break;
        case 'F':
            cout<<"Never try?"<<endl;
            break;
        default:
            cout<<"Invalid Grade Entered"<<endl;                    
    }
    cout<<"Your Grade is : "<<grade<<endl;
    return 0;
}