/*
 * File: mjlist1209.c
 * Description: echo current date
 */

#include <time.h>
#include <stdio.h>

void put_date(void)
{
	time_t    current;
	struct tm *local;
	char wday_name[][7] = {
		"Ri", "1","2","3","4","5","6"
	};

	time(&current);
	local = localtime(&current);
	printf(
		"%4d year %02d month %02d day (%s)",
		local->tm_year + 1900,			/* year */
		local->tm_mon + 1,				/* month */
		local->tm_mday,					/* day */
		wday_name[local->tm_wday]		/* nth day */
	);
}

int main(void)
{
	printf("Today is ");
	put_date();
	printf("\n");

	return (0);
}
