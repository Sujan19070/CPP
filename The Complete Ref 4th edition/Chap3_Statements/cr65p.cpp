#include<stdio.h>

int f1(int n);
int f2(void);

int main(){
    int t;
    printf("Enter a number: ");
    scanf("%d",&t);

    //print proper message
    t ? f1 (t) + f2 () : printf("zero entered.\n")
}