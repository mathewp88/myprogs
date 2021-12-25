#include <stdio.h>
int main()
{
	int a, temp, rev = 0;
	printf("Enter the number: \n");
	scanf("%d", &a);
	temp = a;
	while(temp > 0)
	{
		rev = 10*rev + temp % 10;
		temp = temp/10; 
	}
	printf((a == rev)?" is reversible \n ":" is not reversible \n"); 
	return 0;
}