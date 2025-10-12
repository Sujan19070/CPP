#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"How many character you want to test? define array size : ";
    cin>>t;
    char test[t];
    cout<<"Enter some character : ";
    for(int i=0;i<t;i++)
    {
        cin>>test[i];
    }
    char x;
    cout<<"Enter character to search: "; 
    cin>>x;
    bool found = false;
    for(int k=0;k<t;k++)
    {
        if(test[k]==x)
        {
            cout<<"Found in index : "<<k-1<<endl;
            found = true;
            break;
        }
    }
    if(!found)
    {
        cout<<"Not found."<<endl;
    }
  
    }
