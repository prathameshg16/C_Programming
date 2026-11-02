#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : Number
//  Description   : Accept a number and print whether it is small, medium or large
//  Input         : Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 01/11/2026
//
//////////////////////////////

void Number(int iNo){
    if(iNo < 50){
        printf("Small\n");
    }
    else if( iNo > 50 && iNo < 100){
        printf("medium\n");
    }
    else if(iNo > 100){
        printf("Large\n");
    }
    
}

int main(){
    int iValue = 0;
    printf("Enter a number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}