#include<stdio.h>
#include<stdlib.h>

int OddFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the value: \n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);
    printf("Odd factorial of number is %d",iRet);

    return EXIT_SUCCESS;
}