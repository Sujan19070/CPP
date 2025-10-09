#include<iostream>
using namespace std;
class Student{
    public:
        Student(){cout<<"Constructing..."<<endl;}
        ~Student(){cout<<"Destructing..."<<endl;}

};
// stand alone function
void SampleFunc(){
    Student Nabib;

}
int main(){
    Student main;
    SampleFunc();

    return 0;
}