#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : RangeSumEven
//  Description   : Accept range from user and display sum of all even numbers in that range
//  Input         : Integer
//  Output        : Integer
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 04/11/2026
//
//////////////////////////////

int RangeSumEven(int iStart, int iEnd){
    int iCnt = 0;
    int iSum = 0;
    
    if(iStart > iEnd){
        printf("Invalid range\n");
    }
    if(iStart < 0 || iEnd < 0){
        printf("Invalid range\n");
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++){
        if(iCnt % 2 == 0){
            iSum += iCnt;
        }
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

    iRet = RangeSumEven(iValue1, iValue2);
    
    printf("Addition is : %d\n", iRet);

    return EXIT_SUCCESS;
}