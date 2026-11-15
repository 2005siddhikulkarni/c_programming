
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iColumn)
{
    int iCnt1 = 0, iCnt2 = 0;

    char ch = '\0';

    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    { 

        for(iCnt2 = 1,ch = 'a'; iCnt2 <= iColumn; iCnt2++,ch++)
        {
            if(iCnt1 % 2 != 0)
            {
                printf("%c\t",ch);
            }
            else
            {
               printf("%d\t",iCnt2);
               
            }
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows:\n");
    scanf("%d", &iValue1);

    printf("Enter the number of columns:\n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}
