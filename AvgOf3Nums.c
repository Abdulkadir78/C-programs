#include <stdio.h>

int main()
{
	float n1, n2, n3, sum, avg;
	float add(float n1, float n2, float n3);
	float average(float sum);
	printf("Enter number 1: ");
	scanf("%f", &n1);
	printf("Enter number 2: ");
	scanf("%f", &n2);
	printf("Enter number 3: ");
	scanf("%f", &n3);
	sum = add(n1, n2, n3);
	avg = average(sum);
	printf("Average is %f", avg);
	return 0;
}

float add(float n1, float n2, float n3)
{
	return n1 + n2 + n3;
}

float average(float sum)
{
	return sum / 3;
}
