#include <stdio.h>

int main()
{
	int a[10];
	int sum = 0, i;
	int *p;
	float avg;
	p = a;
	printf("Enter 10 numbers:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", (p + i));
	}
	printf("The entered numbers are:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", *(p + i));
	}
	for (i = 0; i < 10; i++)
	{
		sum = sum + *(p + i);
	}
	avg = (float)sum / 10;
	printf("The average is %f", avg);
	return 0;
}
