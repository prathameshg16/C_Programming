#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : RangeDisplayEven
//  Description   : Accept range from user and display all even numbers in that range
//  Input         : Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 04/11/2026
//
//////////////////////////////

void RangeDisplayEven(int iStart, int iEnd){
    int iCnt = 0;

    if(iStart > iEnd){
        printf("Invalid range\n");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++){
        if(iCnt % 2 == 0){
            printf("%d\t", iCnt);
        }
    }
}

int main(){
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the starting point : ");
    scanf("%d",&iValue1);

    printf("Enter the ending point : ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return EXIT_SUCCESS;
}