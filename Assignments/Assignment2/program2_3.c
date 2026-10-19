#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : Display
//  Description   : Displays "Hello" if the number < 10, else displays "Demo"
//  Input         : Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 19/10/2026
//
//////////////////////////////

void Display(int iNo){
    if(iNo< 10){
        printf("Hello\n");
    }
    else{
        printf("Demo\n");
    }
}

int main(){
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}