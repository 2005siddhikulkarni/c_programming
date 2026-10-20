#include<stdio.h>
#include<stdlib.h>

void DisplayConvert(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c\n",ch - 32);
    }

    else if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("%c\n",ch + 32); 
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}