#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : DisplayFactor
//  Description   : Displays all factors of given number
//  Input         : Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 20/10/2026
//
//////////////////////////////

void DisplayFactor(int iNo){
    int i = 0;

    if(iNo <= 0){
        iNo = -iNo;
    }

    for(i = 1; i <= iNo/2; i++){
        if((iNo % i) == 0){
            printf("%d\t",i);
        }
    }
    
}

int main(){
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return EXIT_SUCCESS;
}