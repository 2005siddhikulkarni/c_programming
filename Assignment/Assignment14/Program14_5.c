#include<stdio.h>
#include<stdlib.h>

int FactDiff(int iNo)
{
    int iCnt = 0, iSumFact = 0, iSumNonFact = 0, iDiff = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;
        }

        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }

    iDiff = iSumFact - iSumNonFact;

    return iDiff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the value: \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("Difference between Summation of Factors and summation of non factors is: %d\n",iRet);

    return EXIT_SUCCESS;
}