#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(
            (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') ||
            (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U')
        )
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}
int main()
{
    char cArr[20];
    BOOL bRet = FALSE;

    printf("Enter the string: \n");
    scanf("%[^'\n']s",&cArr);

    bRet = ChkVowel(cArr);

    if(bRet == TRUE)
    {
        printf("It contains vowel\n");
    }

    else
    {
        printf("It does not contains vowel\n");
    }

    return EXIT_SUCCESS;
}