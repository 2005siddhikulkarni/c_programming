#include<stdio.h>
#include<stdlib.h>

void DisplaySchedule(char ch)
{
    if((ch == 'a') || (ch == 'A'))
    {
        printf("Your exam is at 7 AM \n");
    }

    else if((ch == 'b') || (ch == 'B'))
    {
        printf("Your exam is at 8.30 AM \n");
    }

    else if((ch == 'c') || (ch == 'C'))
    {
        printf("Your exam is at 9.20 AM \n");
    }

    else if((ch == 'd') || (ch == 'D'))
    {
        printf("Your exam is at 10.30 AM \n");
    }

    else
    {
        printf("You have entered the wrong division \n");
    }

}

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}