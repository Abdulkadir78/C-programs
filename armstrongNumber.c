#include <stdio.h>
int main()
{
	int sum = 0;
	int digit, x, copy;
	printf("Enter a number: ");
	scanf("%d", &x);
	copy = x;
	while (x != 0)
	{
		digit = x % 10;
		sum = sum + digit * digit * digit;
		x = x / 10;
	}
	if (sum == copy)
	{
		printf("Armstrong number");
	}
	else
	{
		printf("Not an armstrong number");
	}
	return 0;
}
