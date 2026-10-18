#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : Accept
//  Description   : Accepts a number from user and displays that many "*"
//  Input         : Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 19/10/2026
//
//////////////////////////////

void Accept(int iNo){
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++){
        printf("* ");
    }
}

int main(){
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    Accept(iValue);

    return EXIT_SUCCESS;
}