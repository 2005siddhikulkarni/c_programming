#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    char c = '\0';

    if(ch >= 'A' && ch <= 'Z')
    {
        for(c = ch; c <= 'Z';c++)
        {
            printf("%c\t",c);
        }
    }

    else if(ch >= 'a' && ch <= 'z')
    {
        for(c = 'z'; c >= 'ch'; c--)
        {
            printf("%c\t",c);
        }
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}