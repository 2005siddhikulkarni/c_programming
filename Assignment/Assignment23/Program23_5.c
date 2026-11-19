#include<stdio.h>
#include<stdlib.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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
    int iRet = 0;

    printf("Enter the string: \n");
    scanf("%[^'\n']s",&arr);

    iRet = CountWhite(arr);
    printf("Count of whitespaces in the string is: %d\n",iRet);

    return EXIT_SUCCESS;
}