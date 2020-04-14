#include <stdio.h>

int fibonacci(int a, int b, int i);
int main()
{
    int number;
    int i;
    printf("Enter the number of elements : ");
    scanf("%d", &number);
    printf("0\n");
    for (i = 1; i < number; i++)
    {
        printf("%d\n", fibonacci(0, 1, i));
    }
    return 0;
}

int fibonacci(int a, int b, int i)
{
    if (i == 1)
    {
        return b;
    }
    else
    {
        return (fibonacci(b, (a + b), --i));
    }
}
