#include<bits/stdc++.h>
using namespace std;
struct{
    int roll_no;
    char name[50];
    int marks;
}stud[30];

int main()
{
    for(int i=0;i<3;i++)
    {
        cout<<"Enter roll no,name and marks : ";
        cin>>stud[i].roll_no>>stud[i].name>>stud[i].marks;
    }
    for(int i=0;i<3;i++)
    {
        cout<<"Roll no : "<<stud[i].roll_no<<" Name : "<<stud[i].name<<" Marks : "<<stud[i].marks<<endl;
    }
    return 0;
}