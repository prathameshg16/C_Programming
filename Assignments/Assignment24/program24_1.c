#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////
//
//  Function Name : ChkChar
//  Description   : Accept string from user and check character is their or not
//  Input         : String
//  Output        : Boolean
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 19/11/2026
//
//////////////////////////////

BOOL ChkChar(char *str, char ch){
    while(*str != '\0'){
        if(*str == ch){
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main(){
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter the string :");
    scanf("%[^'\n]s",arr);

    printf("Enter the character :");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE){
        printf("Character found");
    }
    else{
        printf("Character not found");
    }

    return EXIT_SUCCESS;
}