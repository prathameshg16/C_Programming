#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : Difference
//  Description   : Accept string from user and display difference betn frequency of small and capital characters
//  Input         : String
//  Output        : Integer
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 19/11/2026
//
//////////////////////////////

int Difference(char *str){
    int iCountSmall = 0, iCountCapital = 0;
    int iDiff = 0;

    while(*str != '\0'){
        if(*str >= 'a' && *str <= 'z'){
            iCountSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z'){
            iCountCapital++;
        }
        str++;
    }

    iDiff = iCountSmall - iCountCapital;

    return iDiff;
}

int main(){
    char arr[20];
    int iRet = 0;

    printf("Enter the string :");
    scanf("%[^'\n]s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}