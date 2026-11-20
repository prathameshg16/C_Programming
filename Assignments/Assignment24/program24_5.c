#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : StrRev
//  Description   : Accept string from user and return the reverse string
//  Input         : String
//  Output        : 
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 19/11/2026
//
//////////////////////////////

void StrRev(char *str){
    char *start = str, *end = str;

    while(*end != '\0'){
        end++;
    }
    end--;

    while(start < end){
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main(){
    char arr[20];

    printf("Enter the string :");
    scanf("%[^'\n]s",arr);

    StrRev(arr);

    printf("%s",arr);

    return EXIT_SUCCESS;
}