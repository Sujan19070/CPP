#include<iostream>
#include<string.h>
using namespace std;
//globally declared
class Student{
    public:
        char S_name[20];
        char S_id[15];
        float S_cgpa;

        void ShowInfo(void)
        {
            cout<<"Name : "<<S_name<<endl;
            cout<<"ID   : "<<S_id<<endl;
            cout<<"CGPA : "<<S_cgpa<<endl;

        }
};
//stand alone function useObject
void useObject(char *name,char *id,float cgpa)
{
    Student A;
    strcpy(A.S_name,name);
    strcpy(A.S_id,id);
    A.S_cgpa = cgpa;
    A.ShowInfo();
}
int main(){
    useObject("Nabib Ahamed","23511931",3.31);

    return 0;

}