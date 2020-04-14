#include <stdio.h>

int main()
{
	int n, i, table;
	printf("Enter a number: ");
	scanf("%d", &n);

	for (i = 1; i <= 10; i++)
	{
		table = n * i;
		printf("%d*%d=%d\n", n, i, table);
	}

	return 0;
}
