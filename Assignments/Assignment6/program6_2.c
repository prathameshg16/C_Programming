#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : CheckAdmission
//  Description   : Accept age & marks and check whether eligible for admission or not
//  Input         : Float,Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 22/10/2026
//
//////////////////////////////

void CheckAdmission(float fMarks, int iAge){
    if((iAge <= 0 && iAge > 100) || (fMarks <= 0 && fMarks > 100)){
        printf("Invalid input");
    }
    
    if(fMarks >= 60 && iAge >= 17){
        printf("Eligible for admission");
    }
    else{
        printf("Not Eligible");
    }
    
}

int main(){
    int iAge = 0;
    float fMarks = 0;

    printf("Enter age : ");
    scanf("%d",&iAge);

    printf("Enter marks : ");
    scanf("%f",&fMarks);

    CheckAdmission(fMarks,iAge);

    return EXIT_SUCCESS;
}