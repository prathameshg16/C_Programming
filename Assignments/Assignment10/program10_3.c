#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : KmToMtr
//  Description   : Accept amount in dollars and convert it to INR
//  Input         : Integer
//  Output        : Integer
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 02/11/2026
//
//////////////////////////////

int KmToMtr(int iNo){
    int iMtr = 0;

    iMtr = iNo * 1000;

    return iMtr;
}

int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = KmToMtr(iValue);

    printf("Km to Mtr : %d",iRet);

    return EXIT_SUCCESS;
}