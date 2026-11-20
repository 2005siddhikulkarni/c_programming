#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
    int i = 0;

    printf("ASCII Table\n");
    printf("-----------------------------------------------\n");
    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");
    printf("-----------------------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        printf("%c\t%d\t%X\t\t%o\n", i, i, i, i);
    }
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}