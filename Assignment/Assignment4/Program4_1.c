#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo == 0)
    {
        printf("Zero\n");
    }

    else if(iNo > 0)
    {
        printf("Positive Number\n");
    }

    else
    {
        printf("Negative Number\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}