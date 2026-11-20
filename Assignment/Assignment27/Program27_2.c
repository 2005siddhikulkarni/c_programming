#include<stdio.h>
#include<stdlib.h>

int CountSmall(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    iRet = CountSmall(cArr);
    printf("Count of small characters in string is: %d\n",iRet);

    return EXIT_SUCCESS;
}