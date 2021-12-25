#include <stdio.h>
#include <math.h>
int main()
{
	float x, y;
	printf("Enter two numbers: \n");
	scanf("%f %f", &x, &y);
	float expr1 = (exp(x)*sin(60) + 5.6*pow(10, -5))/(3*cos(30));
	float expr2 = sin((atan(0.33)+3.142)/(2*y));
	printf("expr1 is %f and expr2 is %f \n", expr1, expr2);
	return 0;
}