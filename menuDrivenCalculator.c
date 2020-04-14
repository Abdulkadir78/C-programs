#include <stdio.h>

int main()
{
	int choice;
	float n1, n2, result;
	printf("*****MENU*****\n1 is for addition\n2 is for subtraction\n3 is for multiplication\n4 is for division\n5 is for modulus\n6 is for exit\n");
	printf("Enter the first number: ");
	scanf("%f", &n1);
	printf("Enter the second number: ");
	scanf("%f", &n2);
	printf("Enter your choice: ");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		result = n1 + n2;
		printf("The result is %f", result);
		break;

	case 2:
		result = n1 - n2;
		printf("The result is %f", result);
		break;

	case 3:
		if (n1 == 0 || n2 == 0)
		{
			printf("Enter a non zero value");
		}
		else
		{
			result = n1 * n2;
			printf("The result is %f", result);
		}
		break;

	case 4:
		if (n1 == 0 || n2 == 0)
		{
			printf("Enter a non zero value");
		}
		else
		{
			result = n1 / n2;
			printf("The result is %f", result);
		}
		break;

	case 5:
		if (n1 == 0 || n2 == 0)
		{
			printf("Enter a non zero value");
		}
		else
		{
			result = (int)n1 % (int)n2;
			printf("The result is %f", result);
		}
		break;

	case 6:
		break;

	default:
		printf("Invalid choice");
	}
	return 0;
}
