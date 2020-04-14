#include <stdio.h>
int main()
{
	int a[100];
	int n, i, even = 0, odd = 0, eavg, oavg, c = 0, d = 0;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	printf("Enter the elements:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			even = even + a[i];
			c++;
		}
		else
		{
			odd = odd + a[i];
			d++;
		}
	}
	eavg = even / c;
	oavg = odd / d;
	printf("Average of even nos. is %d\n", eavg);
	printf("Average of odd nos. is %d", oavg);
	return 0;
}
