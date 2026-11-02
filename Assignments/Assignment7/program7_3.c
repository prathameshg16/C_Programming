#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : Display
//  Description   : Accept a number and print its number line
//  Input         : Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 01/11/2026
//
//////////////////////////////

void Display(int iNo){
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++){
        printf("%d\t",iCnt);
    }
}

int main(){
    int iValue = 0;
    printf("Enter a number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}