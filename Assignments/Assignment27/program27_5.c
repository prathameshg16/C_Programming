#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : Reverse
//  Description   : Accept string from user and display the reverse string
//  Input         : String
//  Output        : 
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 19/11/2026
//
//////////////////////////////

void Reverse(char *str){
    char *end = str;

    while(*end != '\0'){
        end++;
    }
    end--;

    while(end >= str){
        printf("%c",*end);
        end--;
    }
}

int main(){
    char arr[20];

    printf("Enter the string :");
    scanf("%[^'\n]s",arr);

    Reverse(arr);

    return EXIT_SUCCESS;
}