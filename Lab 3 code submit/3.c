//Convert days to years, months and days assumes that all months have 30 days and all years have 365 days

#include <stdio.h>
int main() {
	int ndays, years, months, days;

	printf("Input no. of days: ");

	scanf("%d", &ndays);

	years = (int) ndays/365;

	ndays = ndays-(365*years);

	months = (int)ndays/30;

	days = (int)ndays-(months*30);

	printf(" %d Years \n %d Months \n %d Days", years, months, days);
	return 0;
}
