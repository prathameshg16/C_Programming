#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : Display
//  Description   : Display character's decimal, hexa-decimal and octal form
//  Input         : Character
//  Output        : 
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 19/11/2026
//
//////////////////////////////

void Display(char ch){
    if(ch >= 0 && ch <= 255){
        printf("Decimal : %d\n",ch);
        printf("Hexa-Decimal : 0X%x\n",ch);
        printf("Octal : %o\n",ch);
    }
}

int main(){
    char cValue = '\0';

    printf("Enter character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}