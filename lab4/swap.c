#include <stdio.h>
int main()
{
	int a, b, temp;
	printf("Enter the two numbers: ");
	scanf("%d %d", &a , &b);
	temp = a;
	a = b;
	b = temp;
	printf("The swapped numbers (using 3rd variable) are %d and %d \n", a , b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("The swapped numbers (without using 3rd variable) are %d and %d \n", a , b);
	return 0;
}