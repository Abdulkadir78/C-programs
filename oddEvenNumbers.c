#include <stdio.h>
int main()
{
	int i, n, c1 = 0, c2 = 0;
	int a[100];
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	printf("Enter the elements\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			c1++;
		}
		else if (a[i] % 2 != 0)
		{
			c2++;
		}
	}
	printf("The no. of even numbers are %d\n", c1);
	printf("The no. of odd numbers are %d", c2);
	return 0;
}
