#include<stdio.h>
#include<stdlib.h>

int main(void){
    int magic,guess;

    magic = rand();

    printf("Guess the magic number: ");
    scanf("%d",&guess);

    if(guess==magic){
        printf("**Right**");
        printf("%d is the magic number.",magic);
    }
    else{
        printf("Wrong");
        if(guess>magic){printf("Too high");}
        else printf("too low");
    }
    
    return 0;
}