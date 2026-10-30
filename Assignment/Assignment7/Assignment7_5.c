#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int iNo)
{
    int iMult = 0;   
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iMult = iNo * iCnt;
        printf("%d\t",iMult);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}