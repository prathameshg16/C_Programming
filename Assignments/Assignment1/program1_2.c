#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : Display
//  Description   : Display "Marvellous" five times
//  Input         : -
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 19/10/2026
//
//////////////////////////////

void Display(){
    int iCnt = 0;

    for(iCnt = 1; iCnt <=5; iCnt++){
        printf("%d. Marvellous\n",iCnt);
    }
}

int main(){

    Display();

    return EXIT_SUCCESS;
}