#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : CountChar
//  Description   : Accept string from user and count frequency of character
//  Input         : String
//  Output        : Integer
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 19/11/2026
//
//////////////////////////////

int CountChar(char *str, char ch){
    int iFreq = 0;

    while(*str != '\0'){
        if(*str == ch){
            iFreq++;
        }
        str++;
    }
    return iFreq;
}

int main(){
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter the string :");
    scanf("%[^'\n]s",arr);

    printf("Enter the character :");
    scanf(" %c",&cValue);

    iRet = CountChar(arr,cValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}