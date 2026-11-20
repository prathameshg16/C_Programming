#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : DisplaySchedule
//  Description   : Accept character from user and display their exam time
//  Input         : Character
//  Output        : 
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 19/11/2026
//
//////////////////////////////

void DisplaySchedule(char ch){
    
    if(ch == 'A'){
        printf("Exam timming : 7:00 AM");
    }
    else if(ch == 'B'){
        printf("Exam timming : 8:30 AM");
    }
    else if(ch == 'C'){
        printf("Exam timming : 9:20 AM");
    }
    else if(ch == 'D'){
        printf("Exam timming : 10:30 AM");
    }
    else{
        printf("Enter a valid division");
    }
}

int main(){
    char cValue;
    

    printf("Enter the character :");
    scanf(" %c",&cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}