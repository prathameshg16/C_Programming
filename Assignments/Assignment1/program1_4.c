#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

//////////////////////////////
//
//  Function Name : Check
//  Description   : Check whether the number is divisible by 5 or not
//  Input         : Integer
//  Output        : Boolean
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 19/10/2026
//
//////////////////////////////

BOOL Check(int iNo){
    
    if((iNo % 5) == 0){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

int main(){
    int iValue = 0;
    BOOL iRet = FALSE;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = Check(iValue);

    if(iRet == TRUE){
        printf("%d is divisible by 5",iValue);
    }
    else{
        printf("%d is not divisible by 5",iValue);
    }

    return EXIT_SUCCESS;
}