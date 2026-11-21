#include<stdio.h>
#include<stdlib.h>

int main()
{
    char name[30] = "\0";

    printf("Enter the name: \n");
    scanf("%[^'\n']s",&name);

    printf("Welcome %s",name);

    return EXIT_SUCCESS;
}