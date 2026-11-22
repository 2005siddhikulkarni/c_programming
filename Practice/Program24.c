#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    char S[20];

    printf("Enetr the name: \n");
    scanf("%[^'\n']s",&sName);

    printf("Enter the filling blanks in the sentence: \n");
    scanf(" %[^'\n']s",&S);

    printf("Hii %s",sName,"Welcome ! \n");

    printf("Your aim is to become ______ : %s\n",S);

    return EXIT_SUCCESS;
}