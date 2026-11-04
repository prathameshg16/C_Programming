#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : RangeSum
//  Description   : Accept range from user and display sum of all numbers in that range
//  Input         : Integer
//  Output        : Integer
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 04/11/2026
//
//////////////////////////////

int RangeSum(int iStart, int iEnd){
    int iCnt = 0;
    int iSum = 0;
    
    if(iStart < 0 || iEnd < 0){
        printf("Invalid range\n");
    }
    if(iStart > iEnd){
        printf("Invalid range\n");
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++){
        iSum += iCnt;
    }

    return iSum;
}

int main(){
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter the starting point : ");
    scanf("%d",&iValue1);

    printf("Enter the ending point : ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);
    
    printf("Addition is : %d\n", iRet);

    return EXIT_SUCCESS;
}