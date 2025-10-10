#include<iostream>
using namespace std;
struct stud
{
    int id;
    char name[40];
    int marks;

}sa[10];

// Find the student, who obtained the highest marks using a function 

stud maxf(stud a[])
{
    stud max;
    max.marks=a[0].marks
    for(int i=1;i<10;i++)
    {
        if(a[i].marks<max.marks)max=a[i];
    }
    return max;
}

void main()
{

    cout<<"Entr data for students records : ";
    for( int i=0; i<10 ;i++){
        cin>>sa[i];
    maxf(sa[i]);
    }
}