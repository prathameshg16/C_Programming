#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : DisplayDigit
//  Description   : Accept number from user and display its digits in reverse
//  Input         : Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 04/11/2026
//
//////////////////////////////

void DisplayDigit(int iNum){
    int iDigit = 0;

    if(iNum < 0){
        iNum = -iNum;
    }

    while(iNum != 0){
        iDigit = iNum % 10;
        printf("%d\n", iDigit);
        iNum = iNum / 10;
    }
}



int main(){
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return EXIT_SUCCESS;
}