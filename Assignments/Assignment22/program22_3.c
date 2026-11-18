#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : Pattern
//  Description   : Accept number of rows and cols and print the pattern
//  Input         : Integer
//  Output        : 
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 18/11/2026
//
//////////////////////////////

void Pattern(int iRow){
    int i = 0;

    for(i = 1; i <= iRow; i++){
        printf("%d\t*\t",i);
    }
}

int main(){
    int iValue1 = 0;

    printf("Enter the number of elements : ");
    scanf("%d",&iValue1);

    Pattern(iValue1);

    return EXIT_SUCCESS;
}