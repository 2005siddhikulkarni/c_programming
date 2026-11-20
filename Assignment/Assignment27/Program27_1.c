#include<stdio.h>
#include<stdlib.h>

int CountCapital(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCount++;
        }

        str++;
    }

    return iCount;
}

int main()
{
    char cArr[20];
    int iRet = 0;

    printf("Enter the string: \n");
    scanf("%[^'\n']s",&cArr);

    iRet = CountCapital(cArr);
    printf("Count of Capital characters in string: %d\n",iRet);

    return EXIT_SUCCESS;
}
