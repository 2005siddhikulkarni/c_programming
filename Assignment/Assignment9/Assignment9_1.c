#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* \t",iCnt);
    }

     for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("# \t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the value: \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}