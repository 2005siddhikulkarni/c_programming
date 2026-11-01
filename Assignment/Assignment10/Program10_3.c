#include<stdio.h>
#include<stdlib.h>

int KMToMeter(int iNo)
{
    int iAns = 0;

    iAns = iNo * 1000;

    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance in KM: \n");
    scanf("%d",&iValue);

    iRet = KMToMeter(iValue);
    printf("Distance from KM in Meter is: %d",iRet);

    return EXIT_SUCCESS;
}