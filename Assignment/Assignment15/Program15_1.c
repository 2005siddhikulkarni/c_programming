#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];

    printf("Enter your full name: \n");
    scanf("%[^'\n']s",&sName);

    printf("Your name is: %s\n",sName);

    return EXIT_SUCCESS;
}