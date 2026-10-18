#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : Display
//  Description   : Display numbers from 5 to 1 using while loop
//  Input         : -
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 19/10/2026
//
//////////////////////////////

void Display(){
    int i = 0;
    i = 5;
    while(i > 0){
        printf("%d\n",i);
        i--;
    }
}

int main(){
    Display();

    return EXIT_SUCCESS;
}