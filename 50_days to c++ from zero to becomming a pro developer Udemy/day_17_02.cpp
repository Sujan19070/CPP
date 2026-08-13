#include<iostream>
using namespace std;

float AddNum(float,float);
float SubNum(float,float);
float MultNum(float,float);
float DiviNum(float,float);
float ModNum(float,float);

float AddNum(float num1,float num2)
{
    return num1+num2;

}
float SubNum(float num1,float num2)
{
    return num1-num2;

}
float MultNum(float num1,float num2)
{
    return num1*num2;
}
float DiviNum(float num1,float num2)
{
    return num1/num2;
}
float ModNum(float num1,float num2)
{
    return 1;
}



int main()
{
    float a,s,m,d,b;
    float num1,num2;
    int selection;

    cout<<"Enter the first integer value : "<<endl;
    cin>>num1;

    cout<<"Enter the second integer value : "<<endl;
    cin>>num2;

    cout<<"Operation in this calculator : "<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division "<<endl;
    cout<<"5. Modular Division "<<endl;

    cin>>selection;
    cout<<endl<<endl;

    switch(selection)
    {
        case 1:
            a=AddNum(num1,num2);
            cout<<"The sum is : "<<a<<endl;
            break;

        case 2:
            s=SubNum(num1,num2);
            cout<<"The Subtracted answer is : "<<b<<endl;
            break;

        case 3:
            m=MultNum(num1,num2);
            cout<<"The product is : "<<m<<endl;
            break;

        case 4:
            d=DiviNum(num1,num2);
            cout<<"The division is : "<<d<<endl;
            break;

        case 5:
            b=ModNum(num1,num2);
            cout<<"The reminder is  : "<<b<<endl;
            break;
        default:
            cout<<"Invalid Selection ."<<endl;            



    }

    return 0;

}