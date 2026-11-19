#include<stdio.h>
#include<stdlib.h>

int FirstChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCount;
        }

        str++;
        iCount++;
    }

    return -1;

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

    iRet = FirstChar(arr,cValue);
    
    if(iRet == -1)
    {
        printf("Character not found \n");
    }

    else
    {
        printf("First occurence of character is: %d\n",iRet);
    }

    return EXIT_SUCCESS;
}