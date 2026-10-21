#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description   : Accept one number and check if it is even or odd
//  Input         : Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 21/10/2026
//
//////////////////////////////

void CheckEvenOdd(int iNo){

    if((iNo % 2) == 0){
        printf("The number is even\n");
    }
    else{
        printf("The number is odd\n");
    }
    
}

int main(){
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}