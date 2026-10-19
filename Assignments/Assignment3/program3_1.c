#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : PrintEven
//  Description   : Accept one number and print that number of even numbers
//  Input         : Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 20/10/2026
//
//////////////////////////////

void PrintEven(int iNo){

    if(iNo <= 0){
        return;
    }

    int i = 0;
    i = 2;
    while( iNo > 0){
        printf("%d\t",i);
        i += 2;
        iNo--;
    }
    
}

int main(){
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}