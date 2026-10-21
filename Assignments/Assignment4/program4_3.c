#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : FindGreater
//  Description   : Accept two numbers and find the greater one
//  Input         : Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 21/10/2026
//
//////////////////////////////

void FindGreater(int iFirst, int iSecond){

    if(iFirst > iSecond){
        printf("%d is greater than %d\n",iFirst,iSecond);
    }
    else if(iFirst == iSecond){
        printf("%d is equal to %d\n",iFirst,iSecond);
    }
    else{
        printf("%d is greater than %d\n",iSecond,iFirst);;
    }    
}

int main(){
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue1);

    printf("Enter a number : ");
    scanf("%d",&iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}