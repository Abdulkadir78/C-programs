#include <stdio.h>

int add(int num1, int num2)
{
   return (num1 + num2);
}

int subs(int num1, int num2)
{
   return (num1 - num2);
}

int multi(int num1, int num2)
{
   return (num1 * num2);
}

int div(int num1, int num2)
{
   return (num1 / num2);
}

int main()
{
   int num1, num2, result;
   printf("Enter 2 numbers: \n");

   scanf("%d%d", &num1, &num2);
   result = add(num1, num2);
   printf("Addition of %d and %d is %d\n", num1, num2, result);

   result = subs(num1, num2);
   printf("substraction of %d and %d is %d\n", num1, num2, result);

   result = multi(num1, num2);
   printf("multiplication of %d and %d is %d\n", num1, num2, result);

   result = div(num1, num2);
   printf("division of %d and %d is %d", num1, num2, result);

   return 0;
}
