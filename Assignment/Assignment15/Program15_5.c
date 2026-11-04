#include<stdio.h>
#include<stdlib.h>

float Percentage(int iNo1, int iNo2)
{
    float fAns = 0.0f;

    if((iNo1 == 0) || (iNo2 == 0))
    {
        return 0;
    }

    fAns = (((float)iNo2 / (float)iNo1) * 100);

    return fAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks: \n");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks: \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);
    printf("Percentage is : %f",fRet); 

    return EXIT_SUCCESS;
}