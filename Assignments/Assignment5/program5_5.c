#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : CheckCharacterType
//  Description   : Accept a character and check its type
//  Input         : Character
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 21/10/2026
//
//////////////////////////////

void CheckCharacterType(char cVal){

    if(cVal >= 65 && cVal <= 90 ){
        printf("Uppercase Alphabet");
    }
    else if(cVal >= 97 && cVal <= 122){
        printf("Lowercase Alphabet");
    }
    else if(cVal >= 48 && cVal <= 57){
        printf("Digit");
    }
    else if((cVal >= 32 && cVal <= 47) || (cVal >= 58 && cVal <= 64) || (cVal >= 91 && cVal <= 96) || (cVal >= 123 && cVal <= 126) ){
        printf("Special Character");
    }
    else{
        printf("Invalid");
    }    
}

int main(){
    char cValue = '\0';

    printf("Enter a character : ");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}