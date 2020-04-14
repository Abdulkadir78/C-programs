#include <stdio.h>

struct employee
{
	int id;
	char name[30];
	float salary;
};

int main()
{
	int i, n;
	struct employee E[10];
	printf("Enter the number of employees:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Enter employee %d name: ", i + 1);
		scanf("%s", E[i].name);
		printf("Enter employee %d id: ", i + 1);
		scanf("%d", &E[i].id);
		printf("Enter employee %d salary: ", i + 1);
		scanf("%f", &E[i].salary);
	}

	printf("Employees with salary more than 10000 are:\n");
	for (i = 0; i < n; i++)
	{
		if (E[i].salary > 10000)
		{
			printf("Name\tID\tSalary\n");
			printf("---------------------------------------------\n");

			printf("%s\t%d\t%f\n", E[i].name, E[i].id, E[i].salary);
		}
	}

	return 0;
}
