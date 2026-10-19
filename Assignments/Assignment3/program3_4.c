#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : DisplayConvert
//  Description   : Accept one character and convert it into either lowercase or uppercase
//  Input         : Character
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 20/10/2026
//
//////////////////////////////

void DisplayConvert(char cValue){
    if(cValue >= 'A' && cValue <= 'Z'){
        printf("%c\n",cValue + 32);
    }
    else if(cValue >= 'a' && cValue <= 'z'){
        printf("%c\n",cValue - 32);
    }
    
}

int main(){
    char cValue = '\0';

    printf("Enter a character : ");
    scanf(" %c",&cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}