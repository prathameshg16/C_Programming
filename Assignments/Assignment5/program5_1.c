#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : FindGreatest
//  Description   : Accept three numbers and find the greatest one
//  Input         : Integer,Integer,Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 21/10/2026
//
//////////////////////////////

void FindGreatest(int iFirst, int iSecond, int iThird){

    if(iFirst > iSecond && iFirst > iThird){
        printf("%d is greater than %d & %d\n",iFirst,iSecond,iThird);
    }
    else if(iSecond > iFirst && iSecond > iThird){
        printf("%d is greater than %d & %d\n",iSecond,iFirst,iThird);
    }
    else{
        printf("%d is greater than %d & %d\n",iThird,iFirst,iSecond);
    }    
}

int main(){
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue1);

    printf("Enter a number : ");
    scanf("%d",&iValue2);

    printf("Enter a number : ");
    scanf("%d",&iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}