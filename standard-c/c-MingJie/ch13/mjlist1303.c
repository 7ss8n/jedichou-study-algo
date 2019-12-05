/*
 * File: mjlist1303.c
 * Description: write current time to file
 */

#include <time.h>
#include <stdio.h>

int main(void)
{
	FILE *fp;
	time_t t;
	struct tm *local;

	time(&t);
	local = localtime(&t);

	if ((fp=fopen("dt_dat", "w")) == NULL)
		printf("Open failed.\n");
	else {
		printf("Write current time to dt_dat success.\n");
		fprintf(fp, "%d %d %d %d %d %d\n",
			local->tm_year + 1900,
			local->tm_mon + 1,
			local->tm_mday,
			local->tm_hour,
			local->tm_min,
			local->tm_sec
		);
		fclose(fp);
	}

	return (0);
}
