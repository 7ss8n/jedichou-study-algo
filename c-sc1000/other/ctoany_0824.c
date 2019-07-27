// create a file and wirte something

#include <stdio.h>
FILE * tvFile;

int main(void)
{
	char name[] = "Gerald";
	char show[] = "Sign Field";
	int age  = 18;

	tvFile = fopen("c:\\shows.dat", "w");

	if (tvFile)
	{
		fprintf(tvFile, "My name is %s.\n", name);
		fprintf(tvFile, "My favorite TV show is %s.\n", show);
		fprintf(tvFile, "I am %d years old.", age);
		fclose(tvFile);
	}
	else
	{
		printf("There's a problem with opening the file.\n");
	}

	return 0;
}
