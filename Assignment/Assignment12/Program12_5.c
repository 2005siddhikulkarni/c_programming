#include<stdio.h>
#include<stdlib.h>

int Count(int iNo)
{
    int iDigit = 0, iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < 6)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    iRet = Count(iValue);
    printf("Frequecy of digits which are less than 6 in number: %d\n",iRet);

    return EXIT_SUCCESS;
}