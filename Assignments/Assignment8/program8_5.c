#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : TableRev
//  Description   : Accept a number and print its table in reverse order
//  Input         : Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 01/11/2026
//
//////////////////////////////

void TableRev(int iNo){
   int iCnt = 0;

   for(iCnt = 10; iCnt >=1; iCnt--){
    printf("%d\t", iCnt * iNo);
   }
    
}

int main(){
    int iValue = 0;
    printf("Enter a number : ");
    scanf("%d",&iValue);

    TableRev(iValue);

    return EXIT_SUCCESS;
}