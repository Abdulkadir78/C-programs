#include <stdio.h>

int main()
{
	float pi = 3.142;
	float radius;
	float area;
	int choice;
	do
	{
		printf("Enter the radius: \n");
		scanf("%f", &radius);
		area = pi * radius * radius;
		printf("The area of the circle is %f\n", area);
		printf("Press 1 to calculate area again or press any other number to exit: \n");
		scanf("%d", &choice);
	} while (choice == 1);
	return 0;
}
