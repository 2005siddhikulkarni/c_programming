#include<stdio.h>
#include<stdlib.h>

int CntChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }

        str++;
    }

    return iCount;

}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string: \n");
    scanf("%[^'\n']s",& arr);

    printf("Enter the character: \n");
    scanf(" %c",&cValue);

    iRet = CntChar(arr,cValue);
    printf("frequency of character in the string is: %d\n",iRet);

    return EXIT_SUCCESS;
}