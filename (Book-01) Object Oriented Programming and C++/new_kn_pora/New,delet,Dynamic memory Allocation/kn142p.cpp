#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *ptr;
    ptr = new int[5000000];

    if(ptr==NULL)
        {
            cout<<"Error:Memory allocation failed."<<endl;
            return(1);//exit program
        }
    
    *ptr = 50;
    cout<<"First element is : "<<*ptr<<endl;
    return 0;    
}