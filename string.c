#include <stdio.h>
int main()
{
	int n, i;
	char a[50];
	printf("Enter the number of characters in your name: ");
	scanf("%d", &n);
	printf("Enter your name\n");
	for (i = 0; i <= n; i++)
	{
		scanf("%c", &a[i]);
	}
	printf("The name you entered is\n");
	for (i = 0; i <= n; i++)
	{
		printf("%c", a[i]);
	}
	return 0;
}
