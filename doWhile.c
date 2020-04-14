#include <stdio.h>

int main()
{
    int number;
    int sum = 0;

    do
    {
        printf("Enter a non zero number or press zero to exit.\n ");
        scanf("%d", &number);
        sum = sum + number;
    } while (!(number == 0));

    printf("Sum of numbers : %d \n", sum);
    return 0;
}
