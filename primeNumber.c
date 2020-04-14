#include <stdio.h>
int main()
{
	int i = 2, n;
	printf("Enter a number: ");
	scanf("%d", &n);

	while (n % i != 0)
	{
		i++;
	}

	if (n == i)
	{
		printf("It is a prime number");
	}

	else
	{
		printf("It is not a prime number");
	}

	return 0;
}
