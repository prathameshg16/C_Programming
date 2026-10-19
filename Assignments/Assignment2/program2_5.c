#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

//////////////////////////////
//
//  Function Name : ChkEven
//  Description   : Check whether the number is even or odd
//  Input         : Integer
//  Output        : Boolean
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 19/10/2026
//
//////////////////////////////

BOOL ChkEven(int iNo){
    return ((iNo % 2) == 0);
}

int main(){
    int iValue = 0;
    BOOL iRet = FALSE;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = ChkEven(iValue);

    if(iRet == TRUE){
        printf("%d is a even number",iValue);
    }
    else{
        printf("%d is a odd number",iValue);
    }

    return EXIT_SUCCESS;
}