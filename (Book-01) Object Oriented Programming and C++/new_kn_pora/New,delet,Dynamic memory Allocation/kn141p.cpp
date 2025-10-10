 #include<bits/stdc++.h>
 using namespace std;

 //declaring class
 class Student{
    char name[25];
    char id[10];
    float cgpa;

    public:
        //--------------------constructor-------------------------
        Student(char *getName,char *getId,float getCgpa)
            {
                strcpy(name,getName);
                strcpy(id,getId);
                cgpa = getCgpa;
            }
        //--------------------member function: Showinfo()-----------------
        void Showinfo()
            {
                cout<<"Name : "<<name<<endl;
                cout<<"Id   : "<<id<<endl;
                cout<<"Cgpa : "<<cgpa<<endl;
            }    
 };

 int main(void)
 {
    //-----Declare integer type pointer--------
    int *Iptr;
    Iptr = new int(50);
    cout<<"Integer value : "<<*Iptr<<endl<<endl;

    //-----Declare Student type pointer-----------
    Student *sptr;
    sptr = new Student("Nabib Ahamed Sujan","23511931",3.33f);
    sptr->Showinfo();




 }