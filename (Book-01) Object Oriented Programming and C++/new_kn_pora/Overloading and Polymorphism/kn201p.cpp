#include<bits/stdc++.h>
using namespace std;
class acc{
    private:
        int acc_id;
        char name[25];
        acc_type;
    public:
        acc();
        acc(int id,char *name,acc_type);
        acc(ifstream &fin);
        void display(void);
        ~acc(){};
};
//----------------member function------------------------------
acc::acc()
{
    int type;
    cout<<endl<<"Enter Account ID : #";
    cin>>acc_id;
    cout<<endl<<"Enter Name of Account holder : ";
    cin<<name;
    cout<<endl<<"Enter Accoutn type(CURRENT=1,SAVINGS=2,FIXED=3) : ";
    cin>>type;
    acc::type = (acc_type)type;
}

