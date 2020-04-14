#include <stdio.h>
int main()
{
	int i, n, sum = 0;
	float avg;
	int a[100];
	printf("Enter the no. of elements: ");
	scanf("%d", &n);
	printf("Enter the numbers\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d\n", &a[i]);
	}
	for (i = 1; i < n; i++)
	{
		sum = sum + a[i];
	}
	avg = sum;
	avg = avg / n;
	printf("The average is %f", avg);
	return 0;
}
