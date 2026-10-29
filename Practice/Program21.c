#include<stdio.h>
#include<stdlib.h>

int main()
{
    char name[] = "\0";

    printf("Enter the name: \n");
    scanf("%s",&name);

    printf("Welcome %s",name);

    return EXIT_SUCCESS;
}