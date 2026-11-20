#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : strupper
//  Description   : Accept string from user and convert in upper case
//  Input         : String
//  Output        : 
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 19/11/2026
//
//////////////////////////////

void strupper(char *str){
    while(*str != '\0'){
        if(*str >= 'a' && *str <= 'z'){
            *str = *str - 32;
        }
        str++;
    }
}

int main(){
    char arr[20];

    printf("Enter the string :");
    scanf("%[^'\n]s",arr);

    strupper(arr);

    printf("Modified string is : %s",arr);

    return EXIT_SUCCESS;
}