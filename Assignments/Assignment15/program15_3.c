#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////
//
//  Function Name : CheckEqual
//  Description   : Accept 2 number from user and check whether they are equal or not
//  Input         : Integer,Integer
//  Output        : Boolean
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 04/11/2026
//
//////////////////////////////

BOOL CheckEqual(int iNum1, int iNum2){
    if(iNum1 == iNum2){
        return TRUE;
    }

    return FALSE;
}



int main(){
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter the 1st number : ");
    scanf("%d",&iValue1);

    printf("Enter the 2st number : ");
    scanf("%d",&iValue2);

    bRet = CheckEqual(iValue1,iValue2);

    if(bRet == TRUE){
        printf("Equal");
    }
    else{
        printf("Not Equal");
    }

    return EXIT_SUCCESS;
}