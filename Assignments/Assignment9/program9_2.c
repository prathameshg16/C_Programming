#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : DollarToINR
//  Description   : Accept amount in dollars and convert it to INR
//  Input         : Integer
//  Output        : Integer
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 02/11/2026
//
//////////////////////////////

int DollarToINR(int iNo){
    int iINR = 0;

    iINR = iNo * 70;

    return iINR;

}

int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Dollar to INR : %d",iRet);

    return EXIT_SUCCESS;
}