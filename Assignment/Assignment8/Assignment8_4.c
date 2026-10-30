#include<stdio.h>
#include<stdlib.h>

void Table(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
   int iCnt = 0;
   int iMult = 0;

   for(iCnt = 1; iCnt <= 10; iCnt++)
   {
        iMult = iNo * iCnt;
        printf("%d \t",iMult);
   }

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}