#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : FirstChar
//  Description   : Accept string from user and return the index of 1st occurence of character
//  Input         : String
//  Output        : Integer
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 19/11/2026
//
//////////////////////////////

int FirstChar(char *str, char ch){
    char *start = str;

    while(*str != '\0'){
        if(*str == ch){
            return str-start;
        }
        str++;
    }
    return -1;
}

int main(){
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter the string :");
    scanf("%[^'\n]s",arr);

    printf("Enter the character :");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr,cValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}