#include<stdio.h>
#include<stdlib.h>

int OddFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    int iFactDiff = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
         if((iCnt % 2) == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }

        else if((iCnt % 2) != 0)
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    iFactDiff = iEvenFact - iOddFact;

    return iFactDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the value: \n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);
    printf("Factorial difference is %d",iRet);

    return EXIT_SUCCESS;
}