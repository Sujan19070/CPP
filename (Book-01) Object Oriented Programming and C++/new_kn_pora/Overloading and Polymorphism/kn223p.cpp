#include<iostream>
using namespace std;

class Rect{
    int length,width;
    public:
        Rect(){length = width = 0;};
        Rect(int length,int width);

        Rect operator+ (int p);
        Rect operator- (int p);
        Rect operator- (Rect r);
        Rect operator++();           // Prefix increment
        Rect operator++(int);        // Postfix increment
        Rect operator+=(Rect op);

        void Show()
        {
            cout<<" Length : "<<length<<" Width : "<<width<<endl;
        }
        void SetLen(int l)
        {
            length = l;
        }
        void SetWidth(int w)
        {
            width = w;
        }
        int GetLen(){return length;}
        int GetWidth(){return width;}

        virtual ~Rect();
    
};
//===============Rect(int len,int w)==================================
Rect::Rect(int len,int w)
{
    length = len;
    width  = w;
}

//=============operator+(int p)========================================
Rect Rect::operator + (int p)
{
    Rect temp;
    temp.SetLen(p+length);
    temp.SetWidth(p+width);
    return temp;
}
//=============operatror-(Rect r)=======================================
Rect Rect::operator - (Rect r)
{
    length -= GetLen();
    width  -= GetWidth();
    return (*this);
//==================operator++()========================================
Rect Rect::operator ++ ()
{
    length++;
    width++; 
    return *this;
}

//==================operator++(int) [postfix] ==========================
Rect Rect::operator++(int)
{
    Rect temp;
    length++;
    width++;
    return *this;
}
}
//====================operator+= (Rect op)==============================
Rect Rect::operator += (Rect op)
{
    length += op.GetLen();
    width  += op.GetWidth();
    return *this;

}
//=============main()====================

int main()
{
    Rect a(20,10),b,c;
    cout<<"At the beginning , In Object a "<<endl;
    a.Show();

    b=a+25;              //calls operator+(int p)
    cout<<"\nAfter b = a + 25, in object b "<<endl;
    b.Show();

    b = b-a;             //calls operator- (Rect r)
    cout<<"\nAfter b = b-a ,in object b "<<endl;
    b.Show();

    c = b-5;
    cout<<"\nAfter c = b -5 , in object c "<<endl;
    c.Show();

    c++;                //calls operator++()
    cout<<"\nAfter a+=c , in object a "<<endl;
    c.Show();

    a+=c;            //calls operator += (Rect op)
    cout<<"\nAfter a+=c , in object a"<<endl;
    a.Show();



    
}