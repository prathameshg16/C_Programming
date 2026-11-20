#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////
//
//  Function Name : ChkVowel
//  Description   : Accept string from user and check if it contains vowel or not
//  Input         : String
//  Output        : Boolean
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 19/11/2026
//
//////////////////////////////

BOOL ChkVowel(char *str){
    while(*str != '\0'){
        if(
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' ||
            *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' 
        ){
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main(){
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter the string :");
    scanf("%[^'\n]s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE){
        printf("Contains vowel");
    }
    else{
        printf("Does not contains vowel");
    }

    return EXIT_SUCCESS;
}