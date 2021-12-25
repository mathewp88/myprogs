#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, x1, x2;
	printf("Enter the value of a, b and c: \n");
	scanf("%lf %lf %lf", &a, &b, &c);
	x1 = (-1*b + sqrt(b*b - 4*a*c))/(2*a);
	x2 = (-1*b - sqrt(b*b - 4*a*c))/(2*a);
	printf("The roots are %lf and %lf \n", x1 , x2);
	return 0;
}