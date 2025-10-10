#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int B[10];

    for(int i=0;i<10;i++)
    {
        cout<<"Give value for "<<i+1<< " no index : ";
        cin>>B[i];
    }

int Smallest = B[0];
for(int i=1;i<10;i++)
{

    if(B[1]<Smallest)
    {
        Smallest=B[i];
    }
}

cout<<"The smallest number is : "<<Smallest<<endl;

    getch ();
    return 0;
}