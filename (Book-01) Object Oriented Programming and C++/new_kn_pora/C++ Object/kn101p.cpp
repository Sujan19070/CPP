#include<iostream>
using namespace std;

//class ConDes       constrctor-destructor
class ConDes{
    public:
        ConDes(){cout<<"Constructing..."<<endl;}
        ~ConDes(){cout<<"Destructing..."<<endl;}
};
//stand alone function SampleFunction
void SampleFunction(void)
{
    cout<<"Object creating in sample function."<<endl;
    ConDes SF;
    cout<<"Return to MAIN() from SampleFunction()."<<endl;

}
int main(){

    cout<<"Object creation in MAIN()"<<endl;
    ConDes MAIN;

    cout<<"Calling sample function here."<<endl;
    SampleFunction();

    cout<<"End of main()"<<endl;
    //destroctor of main() cALLEd here
}