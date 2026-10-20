#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckEven(int iNo)
{
    if((iNo % 2)==0)
    {
        return TRUE;
    }

   else
   {
        return FALSE;
   }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == TRUE)
    {
        printf("%d is even number",iValue);
    }

    else
    {
        printf("%d is not even number",iValue);
    }

    return EXIT_SUCCESS;
}