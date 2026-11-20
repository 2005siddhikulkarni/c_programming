#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }

    printf("Output : %c\n", ch);
}

int main()
{
    char ch = '\0';

    printf("Enter the character: ");
    scanf("%c", &ch);

    Display(ch);

    return EXIT_SUCCESS;
}