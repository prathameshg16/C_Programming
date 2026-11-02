#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : CircleArea
//  Description   : Accept the radius of a circle and return its area
//  Input         : Float
//  Output        : Double
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 02/11/2026
//
//////////////////////////////

double CircleArea(float fRadius){
    double dArea = 0.0;
    double pi = 3.14;

    if(fRadius < 0.0f){
        fRadius = -fRadius;
    }

    dArea = pi * fRadius * fRadius;

    return dArea;
}

int main(){
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the radius of circle : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %f\n",dRet);

    return EXIT_SUCCESS;
}