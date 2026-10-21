#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : CheckLeapYear
//  Description   : Accept year and check if it is a leap year
//  Input         : Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 21/10/2026
//
//////////////////////////////

void CheckLeapYear(int iYear){

    if(((iYear % 4) == 0 && (iYear % 100) != 0) || (iYear % 400) == 0){
        printf("%d is a leap year\n",iYear);
    }
    else{
        printf("%d is not a leap year\n",iYear);
    }
    
}

int main(){
    int iYear = 0;

    printf("Enter a year : ");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}