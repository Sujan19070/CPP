#include<bits/stdc++.h>
using namespace std;
enum acc_type{
    CURRENT = 1,
    SAVINGS = 2,
    FIXED   = 3,
}
//-----------class defination for account type object in commarcial bank----------------
class acc{
    private:
        int acc_id;             //account number
        char name[25];          //name of acc holder
        acc_type type;          //type of the acc

    public:
        acc();                                       //constructor with no parameter   
        acc(int id,char *name,acc_type t);            //constructor with 3 parameter 
        acc(ifstream &fin);                           //constructor with 1 parameter
        void display(void);
        ~acc(){};
};
//----------member function defination---------------------------
acc::acc()
{
    int type;
    cout<<endl<<"Enter Account ID : # ";
    cin>>acc_id;
    cout<<endl<<"Enter name of Account holder : ";
    cin>>name;
    cout<<endl<<"Enter Account type (CURRENT=1,SAVINGS=2,FIXED=3):";
    cin>>type;
    acc::type=(acc_type)type;                       //assignment for base class's 'type'
}
acc::acc(int id,char *name,acc_type t)
{
    acc_id = id;
    strcpy(acc::name,name);
    type = t;
}
acc::acc(ifstream& fin)
{
    fin.open("alsdfsdl",ios::in);                   //open file
    if(!fin)
    {
        cout<<endl<<"File Error: File not found..."<<endl;
        cout<<"So,No record is created,object is empty or Garbage.";
        return;
    }
    fin>>acc_id;
    fin>>name;

    int type;
    fin>>type;
    acc::type=(acc_type)type;
}
void acc::display()
{
    static int out_no=1;
    cout<<endl<<"Output#"<<out_no++;
    char *type_name[]={"","CURRENT","SAVINGS","FIXED"};

    cout<<
}