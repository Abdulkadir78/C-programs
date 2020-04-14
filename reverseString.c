#include <stdio.h>
int main()
{
	int n = 0, i, temp;
	char a[100];
	printf("Enter a string: ");
	gets(a);
	while (a[n] != '\0')
	{
		n++;
	}
	for (i = 0; i < n / 2; i++)
	{
		temp = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = temp;
	}
	printf("The reverse of the string is %s\n", a);
	return 0;
}
