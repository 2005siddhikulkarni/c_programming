
#include<stdio.h>
#include<stdlib.h>

void StrRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start < end)
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
    char arr[20];

    printf("Enter the string:\n");
    scanf("%19[^\n]", arr);

    StrRevX(arr);

    printf("Modified string is: %s\n", arr);

    return EXIT_SUCCESS;
}
