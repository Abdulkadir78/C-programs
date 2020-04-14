#include <stdio.h>

int main()
{
	int base, index, ans;
	int power(int base, int index);
	printf("Enter the base: ");
	scanf("%d", &base);
	printf("Enter the index: ");
	scanf("%d", &index);
	ans = power(base, index);
	printf("The answer is %d", ans);
	return 0;
}

int power(int base, int index)
{
	int result = 1;
	while (index > 0)
	{
		result = result * base;
		index--;
	}
	return result;
}
