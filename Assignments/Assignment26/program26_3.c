#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : Display
//  Description   : If character is capital display from that char to Z and if character is small display from that char till a
//  Input         : Character
//  Output        : 
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 19/11/2026
//
//////////////////////////////

void Display(char ch){
    if(ch >= 'A' && ch <= 'Z'){
        for(char cCnt = ch; cCnt <= 'Z'; cCnt++){
            printf("%c\t",cCnt);
        }
    }
    else if(ch >= 'a' && ch <= 'z'){
        for(char cCnt = ch; cCnt >= 'a'; cCnt--){
            printf("%c\t",cCnt);
        }
    }
    else{
        printf("%c",ch);
    }
}

int main(){
    char cValue = '\0';

    printf("Enter character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}