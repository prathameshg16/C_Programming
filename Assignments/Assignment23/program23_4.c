#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : DisplayDigit
//  Description   : Accept string from user and display only digits
//  Input         : String
//  Output        : 
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 19/11/2026
//
//////////////////////////////

void DisplayDigit(char *str){
    while(*str != '\0'){
        if(*str >= '0' && *str <= '9'){
            printf("%c",*str);
        }
        str++;
    }
}

int main(){
    char arr[20];

    printf("Enter the string :");
    scanf("%[^'\n]s",arr);

    DisplayDigit(arr);

    return EXIT_SUCCESS;
}