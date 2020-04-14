#include <stdio.h>

int main()
{
	int n, i, j, a[50];
	printf("Enter the number of elements in the array:");
	scanf("%d", &n);
	printf("Enter the elements:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the position of the element you want to know: ");
	scanf("%d", &j);
	printf("The element is %d", a[j]);
	return 0;
}
