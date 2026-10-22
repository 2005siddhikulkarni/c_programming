#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
   float fBonus = 0.0f;

   if(iYears >= 10)
   {
          fBonus = fSalary * 0.15f;
   }

   else if((iYears >= 5) && (iYears <= 10))
   {
          fBonus = fSalary * 0.10f;
   }

   else
   {
          fBonus = fSalary * 0.05f;
   }

   printf("Bonus = %f",fBonus);
}

int main()
{
   float fSalary = 0.0f;
   int iYears = 0;

    printf("Enter the salary: \n");
    scanf("%f",&fSalary);

    printf("Enter the years of experinece: \n");
    scanf("%d",&iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}