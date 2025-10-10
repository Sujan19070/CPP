#include<iostream>
#include<conio.h>

using namespace std;
int main()
{


    int location, A[10];
    for(int i=0;i<10;i++)
    {
     cout<<"Enter "<<i+1<< " values for array : ";
     cin>>A[i];   
    }
    
    for (int i=0;i<10;i++)
    { 
        cout<<"The taking number are : "<<A[i]<<endl;

    }
    int x;
    cout<<"give an element for x : ";
    cin>>x;

    int flag = 0;
    for(int i=0;i<10;i++)
    {
        if(A[i]== x )
       cout<<x<<" is in the list.";

      location = i;flag =1;break;
    
    }
    if(flag==1)
    
    {
        cout<<"Found";
    }
    else 
    cout<<"not found";

    getch ();
    return 0;
}