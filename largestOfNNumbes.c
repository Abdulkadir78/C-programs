#include <stdio.h>
int main()
{
	int large, n, i;
	int a[100];
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	printf("Enter the elements\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	large = a[0];
	for (i = 0; i < n; i++)
	{
		if (large < a[i])
		{
			large = a[i];
		}
	}
	printf("The largest number is %d", large);
	return 0;
}
