#include<stdio.h>
//a simple cipher function
char encode(char ch)
{
    return(~ch);//complement of it
}
int main(){
    char ch='b' ;
    printf("%d",encode(ch));

    return 0;
}