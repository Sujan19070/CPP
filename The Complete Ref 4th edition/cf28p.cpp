#include <iostream>
using namespace std;
int series()
{
    static int series_num = 100;
    series_num = series_num + 23;
    return series_num;
}

int main()
{
    cout<<"Hello world!"<<endl;
    for(int i=0;i<=5;i++)
    {
        cout<<"Loop : "<<i<<endl;
        cout<<series()<<endl;
    }
   

    return 0;
}
//static local variable code example