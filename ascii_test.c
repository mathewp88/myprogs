#include <stdio.h>
int main()
{
	char a, b;
	printf("Enter two characters: \n");
	scanf("%c %c", &a, &b);
	int sum = a + b;
	printf("The sum of ascii values are %d \n", sum);
	return 0;
}