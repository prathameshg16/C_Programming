#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : CheckTriangle
//  Description   : Accept three sides and check whether it is valid triangle or not 
//  Input         : Integer,Integer,Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 22/10/2026
//
//////////////////////////////

void CheckTriangle(int iSide1, int iSide2 , int iSide3){
    if(iSide1 < 0 && iSide2 < 0 && iSide3 < 0){
        printf("Invalid");
    }

    if((iSide1 + iSide2) > iSide3){
        printf("It is a valid triangle");
    }
    else{
        printf("Not a valid triangle");
    }
}

int main(){
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter Side1 : ");
    scanf("%d",&iSide1);

    printf("Enter Side2 : ");
    scanf("%d",&iSide2);

    printf("Enter Side3 : ");
    scanf("%d",&iSide3);

    CheckTriangle(iSide1,iSide2,iSide3);

    return EXIT_SUCCESS;
}