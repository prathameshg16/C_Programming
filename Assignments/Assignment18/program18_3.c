#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : Pattern
//  Description   : Accept number of rows and cols and print the pattern
//  Input         : Integer
//  Output        : 
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 14/11/2026
//
//////////////////////////////

void Pattern(int iRow, int iCol){
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRow; i++){
        for(j = 1; j <= iCol; j++){
            if(i == j){
                printf("$\t");
            }
            else{
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main(){
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows : ");
    scanf("%d",&iValue1);

    printf("Enter the number of cols : ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}