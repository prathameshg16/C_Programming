#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : DisplayASCII
//  Description   : Display ASCII table
//  Input         : 
//  Output        : 
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 19/11/2026
//
//////////////////////////////

void DisplayASCII(){
    int iCnt = 0;

    for(iCnt = 0; iCnt <= 255; iCnt++){
        printf("%d\t%o\t%x\t%c\n",iCnt,iCnt,iCnt,iCnt);
    }
}

int main(){
    DisplayASCII();

    return EXIT_SUCCESS;
}