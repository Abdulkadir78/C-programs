#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	printf("Enter the third number: ");
	scanf("%d", &c);
	if (a > b)
	{
		if (a > c)
		{
			printf("A is the greatest");
		}
		else
		{
			printf("C is the greatest");
		}
	}
	else
	{
		if (b > c)
		{
			printf("B is the greatest");
		}
		else
		{
			printf("C is the greatest");
		}
	}
	return 0;
}
