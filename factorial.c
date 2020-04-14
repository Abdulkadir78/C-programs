#include <stdio.h>
int main()
{
    int number;
    long int result;
    long int factorial(int no);
    printf("Enter a number: ");
    scanf("%d", &number);
    result = factorial(number);
    printf("Factorial of the given number is :%d", result);
    return 0;
}
long int factorial(int no)
{
    if (no == 1)
    {
        return 1;
    }
    else
    {
        return (no * factorial(no - 1));
    }
}