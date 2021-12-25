#include <stdio.h>
int main()
{
	char o;
	double a , b, c;
	printf("Enter the operation: +,-,*,/ \n");
	scanf("%c", &o);
	printf("Enter two numbers \n");
	scanf("%lf %lf", &a, &b);
	switch(o)
	{
		case '+':
			c = a + b;
			break;
		case '-':
			c = a - b;
			break;
		case '*':
			c = a * b;
			break;
		case '/':
			c = a / b;
			break;
	}
	printf("The value of a %c b = %lf \n", o, c);
	return 0;
}