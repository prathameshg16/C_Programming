#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : CalculateBonus
//  Description   : Accept employees salary & no. of years service and calculate bonus of employee
//  Input         : Float,Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 22/10/2026
//
//////////////////////////////

void CheckAdmission(float fSalary, int iYears){
float fBonus = 0.0f;

    if(fSalary < 0 || iYears < 0 ){
        printf("Invalid input");
    }

    if(iYears > 10){
        fBonus = fSalary * 0.15;    
    }
    else if(5 <= iYears &&  iYears <= 10){
        fBonus = fSalary * 0.10;
    }
    else{
        fBonus = fSalary * 0.05;    
    }

    printf("Bonus : %f\n",fBonus);
    
}

int main(){
    int iYears = 0;
    float fSalary = 0.0f;

    printf("Enter years of service : ");
    scanf("%d",&iYears);

    printf("Enter salary : ");
    scanf("%f",&fSalary);

    CheckAdmission(fSalary, iYears);

    return EXIT_SUCCESS;
}