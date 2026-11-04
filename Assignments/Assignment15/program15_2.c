#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////
//
//  Function Name : CheckGreater
//  Description   : Accept number from user and check whether it is grater than 100 or not
//  Input         : Integer
//  Output        : Boolean
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 04/11/2026
//
//////////////////////////////

BOOL CheckGreater(int iNum){
    if(iNum > 100){
        return TRUE;
    }

    return FALSE;
}



int main(){
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = CheckGreater(iValue);

    if(bRet == TRUE){
        printf("Greater");
    }
    else{
        printf("Smaller");
    }

    return EXIT_SUCCESS;
}