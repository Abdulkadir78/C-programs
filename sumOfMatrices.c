#include <stdio.h>
int main()
{
	int m, n, i, j;
	int a[10][10];
	int b[10][10];
	int c[10][10];

	printf("Enter the number of rows: ");
	scanf("%d", &m);
	printf("Enter the number of columns: ");
	scanf("%d", &n);

	printf("Enter the elements of matrix 1\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("Enter the elements of matrix 2\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}

	// adding the matrices
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	printf("Entered matrix 1 is\n\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}

	printf("\nEntered matrix 2 is\n\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}

	printf("\nThe sum of entered matrices is\n\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}

	return 0;
}
