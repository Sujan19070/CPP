#include<bits/stdc++.h>
using namespace std;
class X{
    int Height,Width;
    public:
        X(){Height=Width=0;};
        X(int H,int W)
        {
            Height = H;
            Width  = W;
        }
        friend X operator+(X x,int i)
        {
            X temp;
            temp.Height = x.Height+i;
            temp.Width  = x.Width +i;
            return temp;
        }
        void Show()
            {
                cout<<"Height : "<<Height<<" "<<"Width : "<<Width <<endl;
            }
        
};
int main()
{
    X x1(50,72),x2;
    x2 = x1 + 25;
    x1.Show();
    x2.Show();
}