#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : FactRev
//  Description   : Accept number from user and display its factors in reverse order
//  Input         : Integer
//  Output        : Integer
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 04/11/2026
//
//////////////////////////////

void FactRev(int iNo){
    int iCnt = 0;

    if(iNo < 0){
        iNo = -iNo;
    }

    for(iCnt = iNo/2; iCnt >= 1; iCnt--){
        if(iNo % iCnt == 0){
            printf("%d\t",iCnt);
        }
    }

}



int main(){
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return EXIT_SUCCESS;
}