#include <stdio.h>
int main()
{
	int days, month, year;
	printf("Enter the number of days: ");
	scanf("%d", &days);
	year = days / 360;
	days = days % 360;
	month = days / 30;
	days = days % 30;
	printf("%d years, %d months and %d days \n", year, month, days);
	return 0;
}