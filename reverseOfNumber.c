#include <stdio.h>
int main()
{
  int number;
  int remainder;
  int rev = 0;
  printf("Enter a number: ");
  scanf("%d", &number);
  while (number > 0)
  {
    remainder = number % 10;
    number = number / 10;
    rev = rev * 10 + remainder;
  }
  printf("The reverse of the number is %d", rev);
  return 0;
}
