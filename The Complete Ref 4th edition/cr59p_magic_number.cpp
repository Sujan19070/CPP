#include<stdio.h>
#include<stdlib.h>

int main(){
    int magic;
    int guess;
    magic = rand();
    printf("Guess the magic number : ");
    scanf("%d",&guess);

    if(guess == magic)printf("**Right**");
    else printf("Wrong");
    return 0;
}