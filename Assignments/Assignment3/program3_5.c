#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

//////////////////////////////
//
//  Function Name : ChkVowel
//  Description   : Check whether the character is a vowel
//  Input         : Character
//  Output        : Boolean
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 20/10/2026
//
//////////////////////////////

BOOL ChkVowel(char cVal){
    if(cVal == 'A' || cVal == 'E' || cVal == 'I' || cVal == 'O' || cVal == 'U' || cVal == 'a' || cVal == 'e' || cVal == 'i' || cVal == 'o' || cVal == 'u'){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

int main(){
    char cValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a character : ");
    scanf(" %c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE){
        printf("It is a vowel");
    }
    else{
        printf("It is not a vowel");
    }

    return EXIT_SUCCESS;
}