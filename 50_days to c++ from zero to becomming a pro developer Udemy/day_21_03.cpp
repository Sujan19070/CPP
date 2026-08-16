#include<iostream>
using namespace std;

class udemy{
    //member function declaration
    public:
      void printing();
      void printt(int i);

    void printtt()
    {
        cout<<"Function inside the class called."<<endl;
    }
};

void udemy::printing()//scope resulation operator ... indicate that this funtion is a member funtion of udemy member class
{
    cout<<"Function with no arguement called in. "<<endl;
}
void udemy::printt(int i)
{
    cout<<"Function with argument "<<i<<" called"<<endl;
}
int main()
{
    udemy op;
    op.printing();
    op.printt(4);
    op.printtt();
}