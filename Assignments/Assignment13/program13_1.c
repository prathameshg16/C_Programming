#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : CountEven
//  Description   : Accept number from user and count the frequency of even digits
//  Input         : Integer
//  Output        : Integer
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 04/11/2026
//
//////////////////////////////

int CountEven(int iNum){
    int iDigit = 0;
    int iCount = 0;

    if(iNum < 0){
        iNum = -iNum;
    }

    while(iNum != 0){
        iDigit = iNum % 10;
        if(iDigit % 2 == 0){
            iCount++;
        }
        iNum = iNum / 10;
    }

    return iCount;
}



int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("Frequency of even digits is : %d", iRet);

    return EXIT_SUCCESS;
}