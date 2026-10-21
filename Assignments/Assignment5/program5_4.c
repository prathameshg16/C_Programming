#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : CheckMultipleDivisibility
//  Description   : Accept a number and check if it is divisible by 3 and 5
//  Input         : Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 21/10/2026
//
//////////////////////////////

void CheckMultipleDivisibility(int iNo){

    if((iNo % 3) == 0 && (iNo % 5) == 0){
        printf("%d is divisible by both 3 & 5\n",iNo);
    }
    else if((iNo % 3) == 0){
        printf("%d is divisible only by 3\n",iNo);
    }
    else if((iNo % 5) == 0){
        printf("%d is divisible only by 5\n",iNo);
    }
    else{
        printf("%d is not divisible by both 3 & 5\n",iNo);
    }    
}

int main(){
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}