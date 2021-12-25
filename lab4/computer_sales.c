#include <stdio.h>
int main()
{
	double comp, salary, com;
	printf("Enter the number of computers sold: ");
	scanf("%lf", &comp);
	salary = 1500.00 + 200.00 * comp;
	com = salary * 0.02;
	salary += com;
	printf("The total salary is: %lf", salary);
	return 0;
}