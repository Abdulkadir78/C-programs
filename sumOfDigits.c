#include <stdio.h>

int main()
{
    int number;
    int sum = 0;
    int remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0)
    {
        remainder = number % 10;
        sum = sum + remainder;
        number = number / 10;
    }
    printf("Sum of digits : %d", sum);

    return 0;
}
