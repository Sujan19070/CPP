#include<iostream>
using namespace std;

class StringLength{
    public:
        char *p;
        void Print(void){
            cout<<"/t"<<p<<"/tLength is : "<<strlen(p)<<endl;
        }

        StringLength(){                                  //constructor
            p = new char[50];
        }
        StringLength(StringLength &){                   //copy constructor

        }
};
//defining copy constructor
StringLength::StringLength(StringLength& str)
{
    strcpy(p,str.p);
}
int main(){
    StringLength str1;
    strcpy(str1.p,"Str1: Kamruzzaman");
    


}