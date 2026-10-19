#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : Display
//  Description   : Displays the given number of "*"
//  Input         : Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 19/10/2026
//
//////////////////////////////

void Display(int iNo){
    int iCnt = 0;

    if(iNo < 0){
        iNo = -iNo;
    }

    iCnt = 1;
    while(iCnt <= iNo){
        printf(" * ");
        iCnt++;
    }
}

int main(){
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}