#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : CalculateElectricityBill
//  Description   : Accept electricity units and calculate total bill 
//  Input         : Integer
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 22/10/2026
//
//////////////////////////////

void CalculateElectricityBill(int iUnits){
    float fBill = 0.0f;
    
    if(iUnits < 0){
        printf("Invlid");
    }

    if(iUnits <= 100){
        fBill = 5 * iUnits;
    }
    else if(iUnits <= 200){
        fBill = (100 * 5) + ((iUnits - 100) * 7);
    }
    else{
        fBill = (100 * 5) + (100 * 7) + ((iUnits - 200) * 10);
    }
    
    printf("Bill amount : %f\n",fBill);
}

int main(){
    int iUnits = 0;

    printf("Enter units : ");
    scanf("%d",&iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}