#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {
        printf("Divisible by Both\n");
    }

    else if((iNo % 3) == 0)
    {
        printf("Divisible by 3 only\n");
    }

    else if((iNo % 5) == 0)
    {
        printf("Divisible by 5 only\n");
    }

    else
    {
        printf("Not Divisible by either \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}