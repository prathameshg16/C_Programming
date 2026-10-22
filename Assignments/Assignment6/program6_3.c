#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : CalculateDiscount
//  Description   : Accept total payable amount and calculate total bill after applying discount 
//  Input         : Float
//  Output        : -
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 22/10/2026
//
//////////////////////////////

void CalculateDiscount(float fAmt){
    float fDiscount = 0.0f;
    float fFinalAmt = 0.0f;
    
    if(fAmt < 0){
        printf("Invlid");
    }

    if(fAmt < 1000){
        fDiscount = fAmt * 0;
        fFinalAmt = fAmt - fDiscount;
    }
    else if(1000 <= fAmt && fAmt < 5000){
        fDiscount = fAmt * 0.1;
        fFinalAmt = fAmt - fDiscount;
    }
    else{
        fDiscount = fAmt * 0.2;
        fFinalAmt = fAmt - fDiscount; 
    }

    printf("Bill amount : %f\n",fFinalAmt);
    
}

int main(){
    float fAmount = 0.0f;

    printf("Enter payable amount : ");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}