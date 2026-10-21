#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : CheckNumber
//  Description   : Accept one number and check if it is positive or negative
//  Input         : Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 21/10/2026
//
//////////////////////////////

void CheckNumber(int iNo){

    if(iNo < 0){
        printf("The number is negative\n");
    }
    else if( iNo > 0){
        printf("The number is positive\n");
    }
    else{
        printf("The number is zero\n");
    }
    
}

int main(){
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}