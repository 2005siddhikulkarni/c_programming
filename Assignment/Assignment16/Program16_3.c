#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iColumn)
{
    int iCnt1 = 0, iCnt2 = 0;
    char ch = '\0';

    for(iCnt1 = 1, ch = 'A';iCnt1 <= iRow; iCnt1++, ch++)
    {
        for(iCnt2 = 1; iCnt2 <= iColumn; iCnt2++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows: \n");
    scanf("%d",&iValue1);

    printf("Enter the number of columns: \n");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}