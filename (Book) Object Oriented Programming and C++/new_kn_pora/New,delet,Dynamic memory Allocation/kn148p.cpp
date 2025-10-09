#include<bits/stdc++.h>
using namespace std;
class ListElement{
    int i;
    public:
        void Setvalue(int x)
        {i=x;}
        int Getvalue()
        {return i;}
        ListElement *NextElement;   //pointer member
};
int main(){
    ListElement le1,le2;

    le1.Setvalue(50);
    cout<<"Value in le1 : "<<le1.Getvalue()<<endl;

    le2.Setvalue(100);
    cout<<"Value in le2 : "<<le2.Getvalue()<<endl;

    le1.NextElement = &le2;
    cout<<"Value in le2 : "<<(le1.NextElement)->Getvalue();
}