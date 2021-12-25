#include <stdio.h>
int main()
{
	int u, a, t, temp1;
	double temp2, s;
	printf("Enter the speed: \n");
	scanf("%d", &u);
	printf("Enter the acceleration: \n");
	scanf("%d", &a);
	printf("Enter the time: \n");
	scanf("%d", &t);
	temp1 = u * t;
	temp2 = 0.5 * a * t * t;
	s = temp1 + temp2;
	printf("The distance is: %f \n", s);
	return 0;
}