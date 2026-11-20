#include <stdio.h>
#include<stdlib.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    while (*end != '\0')
    {
        end++;
    }

    end--;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char cArr[20];

    printf("Enter a string: \n");
    scanf(" %[^\n]s",cArr);

    Reverse(cArr);

    printf("Reversed string is: %s\n", cArr);

    return EXIT_SUCCESS;
}