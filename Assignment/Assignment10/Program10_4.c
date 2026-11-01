#include<stdio.h>
#include<stdlib.h>

double FhToCs(float fTemp)
{
    double dAns = 0.0;

    dAns = ((fTemp - 32) * ((float)5 / (float)9));

    return dAns;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: \n");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);
    printf("Temperature from Fahrenheit to Celcius: %lf",dRet);

    return EXIT_SUCCESS;
}