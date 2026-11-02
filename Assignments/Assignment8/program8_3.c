#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : Factorial
//  Description   : Accept a number and print its factorial
//  Input         : Integer
//  Output        : Integer
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 01/11/2026
//
//////////////////////////////

int Factorial(int iNo){
    int iFact = 1;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++){
        iFact = iFact * iCnt;
    }

    return iFact;
    
}

int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %d\n",iRet);

    return EXIT_SUCCESS;
}