#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
   if((fMarks >= 60) && (iAge >= 17))
   {
        printf("Eligible for Admission\n");
   }

   else
   {
        printf("Not Eligible \n");
   }
}

int main()
{
   float fMarks = 0.0f;
   int iAge = 0;

    printf("Enter the marks: \n");
    scanf("%f",&fMarks);

    printf("Enter the age: \n");
    scanf("%d",&iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}