// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"Enter some number for the array : "<<endl;
//     int x[10];
//     for(int i=0;i<10;i++)
//     cin>>x[i];

//     //for display
//     for(int i=0;i<10;i++)
//     cout<<" "<<x[i];

//     return 0;
// }

//----------------------------------------------------
//--------------same code using scanf() and printf()--------------
// #include<stdio.h>
// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"Enter some number for the array : "<<endl;
//     int x[10];
//     for(int i=0;i<10;i++)
//     scanf("%d",&x[i]);

//     //for display
//     for(int i=0;i<10;i++)
//     printf("%d",&x[i]);

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"Enter 10 numbers for the array:\n";

    int x[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &x[i]);   // Correct: pass address of x[i]
    }

    // For display
    cout<<"You entered: "<<endl;
    for (int i = 0; i < 10; i++) {
        printf("%d ", x[i]);  // Correct: print value, not address
    }


    return 0;
}
