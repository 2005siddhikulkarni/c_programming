#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter the first number: \n");
    scanf("%d",&iValue1);

    printf("Enter the second number: \n");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2;
    printf("Addition is: %d\n",iResult);
    
    return EXIT_SUCCESS;
}