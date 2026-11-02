#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : RectangleArea
//  Description   : Accept the length and width of a rectangle and return its area
//  Input         : Float
//  Output        : Double
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 02/11/2026
//
//////////////////////////////

double RectangleArea(float fLength, float fWidth){
    double dArea = 0.0;

    if(fLength < 0.0f){
        fLength = -fLength;
    }
    if(fWidth < 0.0f){
        fWidth = -fWidth;
    }

    dArea = fLength * fWidth;

    return dArea;
}

int main(){
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter the length of rectangle : ");
    scanf("%f",&fValue1);

    printf("Enter the width of rectangle : ");
    scanf("%f",&fValue2);


    dRet = RectangleArea(fValue1,fValue2);

    printf("Area of rectangle is : %f\n",dRet);

    return EXIT_SUCCESS;
}