#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////
//
//  Function Name : ChkChar
//  Description   : Accept character from user and check character is alphabet or not
//  Input         : Character
//  Output        : Boolean
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 19/11/2026
//
//////////////////////////////

BOOL ChkChar(char ch){
    
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
        return TRUE;
    }
    return FALSE;
}

int main(){
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter the character :");
    scanf(" %c",&cValue);

    bRet = ChkChar(cValue);

    if(bRet == TRUE){
        printf("It is a Character");
    }
    else{
        printf("It is not a Character");
    }

    return EXIT_SUCCESS;
}