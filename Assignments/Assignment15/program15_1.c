#include<stdio.h>
#include<stdlib.h>

int main(){
    char name[30];

    printf("Please enter your full name : ");
    scanf("%[^'\n']s",name);

    printf("Your name is : %s",name);

    return EXIT_SUCCESS;
}