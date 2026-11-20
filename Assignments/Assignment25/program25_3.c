#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////
//
//  Function Name : ChkDigit
//  Description   : Accept character from user and check character is digit or not
//  Input         : Character
//  Output        : Boolean
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 19/11/2026
//
//////////////////////////////

BOOL ChkDigit(char ch){
    
    if((ch >= '0' && ch <= '9')){
        return TRUE;
    }
    return FALSE;
}

int main(){
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter the character :");
    scanf(" %c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE){
        printf("It is a digit");
    }
    else{
        printf("It is not a digit");
    }

    return EXIT_SUCCESS;
}