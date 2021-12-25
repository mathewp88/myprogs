#include <stdio.h>
int main()
{
	int a , b ,c , d, num1, num2, sum;
	printf("Enter the 4 numbers \n");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if(a > b)
		num1 = a;
	else
		num1 = b;
	if(c > d)
		num2 = c;
	else
		num2 = d;
	sum = num1 + num2;
	printf("sum is %d \n", sum);
	return 0;
}