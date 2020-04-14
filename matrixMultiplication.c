#include <stdio.h>

int main()
{
	int a[15][15], b[15][15], c[15][15];
	int i, j, k, r1, c1, r2, c2;

	printf("Enter the no. of rows for matrix A: ");
	scanf("%d", &r1);
	printf("Enter the no. of columns for matrix A: ");
	scanf("%d", &c1);
	printf("Enter the no. of rows for matrix B: ");
	scanf("%d", &r2);
	printf("Enter the no. of columns for matrix B: ");
	scanf("%d", &c2);

	if (r1 == c2)
	{
		printf("Enter the elements of matrix A\n");
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c1; j++)
			{
				scanf("%d", &a[i][j]);
			}
		}

		printf("Enter the elements of matrix B\n");
		for (i = 0; i < r2; i++)
		{
			for (j = 0; j < c2; j++)
			{
				scanf("%d", &b[i][j]);
			}
		}

		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c2; j++)
			{
				c[i][j] = 0;
				for (k = 0; k < c1; k++)
				{
					c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
				}
			}
		}

		printf("The resultant matrix is\n");
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c2; j++)
			{
				printf("%d\t", c[i][j]);
			}
			printf("\n");
		}
	}

	else
	{
		printf("MULTIPLICATION NOT POSSIBLE\n");
	}
	return 0;
}
