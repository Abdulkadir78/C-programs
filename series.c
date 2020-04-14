#include <stdio.h>

int main()
{
   double sum = 0;
   int number;
   int i;
   printf("Enter a number: ");
   scanf("%d", &number);
   for (i = 1; i <= number; i++)
   {
      sum = sum + (1 / (double)i);
   }
   printf("The sum of the given series is:%lf", sum);
   return 0;
}
