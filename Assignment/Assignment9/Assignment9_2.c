#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo)
{
   int iRs = 0;

   iRs = iNo * 70;

    return iRs;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the value: \n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);
    printf("Value in INR is %d",iRet);

    return EXIT_SUCCESS;
}