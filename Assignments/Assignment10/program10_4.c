#include<stdio.h>
#include<stdlib.h>

//////////////////////////////
//
//  Function Name : FahrenheitToCelsius
//  Description   : Accept temperature in Fahrenheit and convert it to Celsius
//  Input         : Float
//  Output        : Double
//  Author        : Prathamesh Vitthal Gaikwad
//  Date          : 02/11/2026
//
//////////////////////////////

double FahrenheitToCelsius(float fTemp){
    double dCelsius = 0.0;

    dCelsius = (fTemp - 32) * 5 / 9;

    return dCelsius;
}

int main(){
    float fValue1 = 0.0f;
    double dRet = 0.0;

    printf("Enter the temperature in Fahrenheit : ");
    scanf("%f",&fValue1);

    dRet = FahrenheitToCelsius(fValue1);

    printf("Celsius temperature is : %f\n",dRet);

    return EXIT_SUCCESS;
}