#include<stdio.h>
#include<stdlib.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
        return;
    }
    
    int iCnt = 0;

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the starting point: \n");
    scanf("%d",&iValue1);

    printf("Enter the ending point: \n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return EXIT_SUCCESS;
}