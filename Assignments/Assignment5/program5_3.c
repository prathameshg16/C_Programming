#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : DisplayGrade
//  Description   : Accept marks and display the grade
//  Input         : Float
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 21/10/2026
//
//////////////////////////////

void DisplayGrade(float fMarks){
    if(fMarks < 0 || fMarks > 100){
        printf("Invalid marks\n");
    }
    else if(fMarks >= 90 && fMarks <= 100){
        printf("Grade : A\n");
    }
    else if(fMarks >= 75 && fMarks <= 89){
        printf("Grade : B\n");
    }
    else if(fMarks >= 60 && fMarks <= 74){
        printf("Grade : C\n");
    }
    else if(fMarks >= 40 && fMarks <= 59){
        printf("Grade : D\n");
    }
    else{
        printf("Grade : Fail\n");
    }
    
}

int main(){
    float fMarks = 0.0f;

    printf("Enter marks : ");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}