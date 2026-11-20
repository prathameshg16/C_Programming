#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : CountSmall
//  Description   : Accept string from user and display Count of small characters
//  Input         : String
//  Output        : Integer
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 19/11/2026
//
//////////////////////////////

int CountSmall(char *str){
    int iCount = 0;

    while(*str != '\0'){
        if(*str >= 'a' && *str <= 'z'){
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main(){
    char arr[20];
    int iRet = 0;

    printf("Enter the string :");
    scanf("%[^'\n]s",arr);

    iRet = CountSmall(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}