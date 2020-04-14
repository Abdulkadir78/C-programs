#include <stdio.h>

int main()
{
	int n, result;
	int add(int n);
	printf("Enter a number: ");
	scanf("%d", &n);
	result = add(n);
	printf("The sum of first %d numbers is %d", n, result);
	return 0;
}

int add(int n)
{
	if (n > 0)
	{
		return (n + add(n - 1));
	}
}
