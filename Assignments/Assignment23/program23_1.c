#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : strlower
//  Description   : Accept string from user and convert in lower case
//  Input         : String
//  Output        : 
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 19/11/2026
//
//////////////////////////////

void strlower(char *str){
    while(*str != '\0'){
        if(*str >= 'A' && *str <= 'Z'){
            *str = *str + 32;
        }
        str++;
    }
}

int main(){
    char arr[20];

    printf("Enter the string :");
    scanf("%[^'\n]s",arr);

    strlower(arr);

    printf("Modified string is : %s",arr);

    return EXIT_SUCCESS;
}