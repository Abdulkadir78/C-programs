#include <stdio.h>

int main()
{
	int n1, n2, sum;
	int add(int n1, int n2);
	printf("Enter number 1: ");
	scanf("%d", &n1);
	printf("Enter number 2: ");
	scanf("%d", &n2);
	sum = add(n1, n2);
	printf("Sum=%d", sum);
	return 0;
}

int add(int n1, int n2)
{
	return n1 + n2;
}
