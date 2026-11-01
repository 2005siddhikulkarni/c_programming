#include<stdio.h>
#include<stdlib.h>

double RectArea(float fWidth, float fHeight)
{
    double dAns = 0.0;

    dAns = fWidth * fHeight;

    return dAns;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter Width: \n");
    scanf("%f",&fValue1);

    printf("Enter Height: \n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);
    printf("Area of Rectangle is: %lf",dRet);

    return EXIT_SUCCESS;
}