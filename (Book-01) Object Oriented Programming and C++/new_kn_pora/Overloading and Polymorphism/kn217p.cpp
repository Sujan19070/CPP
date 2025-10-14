#include<bits/stdc++.h>
using namespace std;
class X{
    int Height,Width;
    public:
        X(){Height=Width=0;}
        X(int H,int W){Height=H;Width=W;}
        X operator+(int x)
        {
            X temp;
            temp.Height = Height + x;
            temp.Width  = Width + x;
            return temp;
        }
        void Show()
        {
            cout<<"Height : "<<Height<<" Width : "<<Width <<endl;
        }
};
int main()
{
    X x1(50,75),x2;
    x2 = x1 + 25;
    x1.Show();
    x2.Show();

    return 0;
}
