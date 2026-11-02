#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : Table
//  Description   : Accept a number and print its table
//  Input         : Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 01/11/2026
//
//////////////////////////////

void Table(int iNo){
   int iCnt = 0;

   for(iCnt = 1; iCnt <=10; iCnt++){
    printf("%d\t", iCnt * iNo);
   }
    
}

int main(){
    int iValue = 0;
    printf("Enter a number : ");
    scanf("%d",&iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}