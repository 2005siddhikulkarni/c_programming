#include<stdio.h>
#include<stdlib.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 0;

    if((iNo1 == 0) || (iNo2 == 0) || (iNo3 == 0))
    {
        return 0;
    }

    iMult = iNo1 * iNo2 * iNo3;

    return iMult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Enter the first number: \n");
    scanf("%d",&iValue1);

    printf("Enter the second number: \n");
    scanf("%d",&iValue2);
    printf("Enter the third number: \n");
    scanf("%d",&iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);
    printf("Multiplication is: %d\n",iRet);

    return EXIT_SUCCESS;
}