#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : SquareMeter
//  Description   : Accept a number in square feet and convert it to square meters
//  Input         : Integer
//  Output        : Double
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 02/11/2026
//
//////////////////////////////

double Squaremeter(int iNo){
    double dSqMtr = 0.0;

    dSqMtr = iNo * 0.0929;

    return dSqMtr;
}

int main(){
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    dRet = Squaremeter(iValue);

    printf("Square Meters : %f",dRet);

    return EXIT_SUCCESS;
}