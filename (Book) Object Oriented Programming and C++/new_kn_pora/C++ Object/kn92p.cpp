#include<iostream>
#include<cstring>
using namespace std;
class Student{
    char S_name[14];
    char S_id[10];
    float S_cgpa;
    public:
        void GetInfo(char *name,char *id,float cgpa)
        {
            strcpy(S_name,name);
            strcpy(S_id,id);
            S_cgpa=cgpa;
        }

        void ShowInfo(void){
            cout<<"Name : "<<S_name<<endl;
            cout<<"ID   : "<<S_id<<endl;
            cout<<"CGPA : "<<S_cgpa<<endl;

        }
};

int main(void)
{
    Student A,B;
    A.GetInfo("Nabib","23511931",3.31);
    B=A;
    cout<<"Printing the A object informantio: "<<endl;
    A.ShowInfo();
    cout<<"Printing the object B informantion : "<<endl;
    B.ShowInfo();

}
