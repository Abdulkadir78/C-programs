#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[5];
    int i;
    int sum = 0;

    printf("Enter 5 numbers to store in an array.\n ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
        sum = sum + array[i];
    }

    printf("The numbers you entered are as follows:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", array[i]);
    }

    printf("sum is %d\n", sum);

    return 0;
}
