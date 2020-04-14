#include <stdio.h>
int main()
{
	int n = 0, i;
	char a[100], rev[100];
	printf("Enter a string: ");
	gets(a);
	while (a[n] != '\0')
	{
		n++;
	}

	for (i = 0; i < n; i++)
	{
		rev[n - 1 - i] = a[i];
	}

	for (i = 0; i < n; i++)
	{
		if (a[i] != rev[i])
		{
			break;
		}
	}

	if (i == n)
		printf("It is a palindrome");

	else
		printf("It is not a palindrome");
	return 0;
}
