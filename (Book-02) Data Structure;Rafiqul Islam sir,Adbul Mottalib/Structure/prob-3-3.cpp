#include<iostream>
using namespace std;
struct {
    float wt; //weight of an item
    float val; //value of an item
    float uval; //value of unit value

}list[10];

int main()
{
    cout<<"Enter the weight and values of the items : ";
    for (int i=0;i<10;i++)
    {
        cin>>list[i].wt;
        cin>>list[i].val;
    }

    for (int i=0;i<10;i++)
    {
        list[i].uval = list[i].val/list[i].wt; //find unit value
    }

    
    cout << "Unit values:" << endl;
    for (int i = 0; i < 10; i++)
       {
        cout<< list[i].uval << " ";
        

    cout << endl;}
}