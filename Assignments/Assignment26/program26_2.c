#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : Display
//  Description   : Display character if capital then to small and vice versa
//  Input         : Character
//  Output        : 
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 19/11/2026
//
//////////////////////////////

void Display(char ch){
    if(ch >= 'A' && ch <= 'Z'){
        printf("%c",ch+32);
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("%c",ch-32);
    }
    else{
        printf("%c",ch);
    }
}

int main(){
    char cValue = '\0';

    printf("Enter character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}