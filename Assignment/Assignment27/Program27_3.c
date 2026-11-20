#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)
{
    int iSmallCnt = 0, iCapitalCnt = 0, iDiff = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCapitalCnt++;
        }

        else if(*str >= 'a' && *str <= 'z')
        {
            iSmallCnt++;
        }

        str++;
    }

    iDiff = iSmallCnt - iCapitalCnt;

    return iDiff;
}

int main()
{
    char cArr[20];
    int iRet = 0;

    printf("Enter the string: \n");
    scanf("%[^'\n]s",&cArr);

    iRet = Difference(cArr);
    printf("Difference between frequency of small letters and frequency of capital letters is: %d\n",iRet);

    return EXIT_SUCCESS;
}