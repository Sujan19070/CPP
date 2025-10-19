#include<bits/stdc++.h>
using namespace std;
enum acc_type{CURRENT = 1,SAVINGS = 2,FIXED = 3};
//.............class defination for account type object in commirtial bank
class acc{
    private:
        int acc_id;
        char name[25];
        acc_type type;
    public:
        acc();
        acc(int id,char *name,acc_type t);
        acc(ifstream &fin);
        void display(void);
        ~acc(){};
};
//----------member function definition--------------
acc::acc()
{
    int type;
    cout<<endl<<"Enter Accoutn ID : # ";
    cin>>acc_id;
    cout<<endl<<"Enter name of the account holder : ";
    cin>>name;
    cout<<endl<<"Enter Account type (CURRENT=1,SAVINGS=2,FIXED=3): ";
    cin>>type;
    acc::type=(acc_type)type;
}
acc::acc(int id,char *name,acc_type t)
{
    acc_id = id;
    strcpy(acc::name,name);
    type = t;
}
acc::acc(ifstream& fin)
{
    fin.open("C:\\Temp\\Overload.dat",ios::in);    //Open file
    
    if(!fin)
    {
        cout<<endl<<"File Error:File not found..."<<endl;
        cout<<"So,No record is created ,object is empty or Garbage.";
        return;
    }
    fin>>acc_id;
    fin>>name;

    int type;
    fin>>type;
    acc::type = (acc_type)type;
}
void acc::display(void)
{
    static int out_no = 1;
    cout<<endl<<"Output # "<<out_no++;
    char *type_name[] = {"","CURRENT","SAVINGS","FIXED"};

    cout<<endl<<"Account Id #"<<acc_id<<endl;
    cout<<"Name       : "<<name<<endl;
    cout<<"Account type : "<<type_name[type]<<endl;

}
int main()
{
    ifstream fin;
    acc a1,a2(2,"Niton",SAVINGS),a3(fin);
    a1.display();
    a2.display();
    a3.display();
}