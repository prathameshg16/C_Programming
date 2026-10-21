#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : CheckDivisibility
//  Description   : Accept one number and check if it is divisible by 5
//  Input         : Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 21/10/2026
//
//////////////////////////////

void CheckDivisibility(int iNo){

    if((iNo % 5) == 0){
        printf("The number is divisible by 5\n");
    }
    else{
        printf("The number is not divisible by 5\n");
    }
}


int main(){
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}