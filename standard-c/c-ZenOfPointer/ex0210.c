#include <stdio.h>
int main(void)
{
	int temp;
	char *week[] = {"Illagal day", "Monday", "Tuesday", "Wednesday","Thursday", "Friday", "Saturday", "Sunday"};
	printf("Pls input a number : ");
	scanf("%d", &temp);
	if (temp <= 7)
	{
		switch (temp)
		{
			case 0:
				printf(" %s\n", week[0]);
				break;
			case 1:
				printf(" %s\n", week[1]);
				break;
			case 2:
				printf(" %s\n", week[2]);
				break;
			case 3:
				printf(" %s\n", week[3]);
				break;
			case 4:
				printf(" %s\n", week[4]);
				break;
			case 5:
				printf(" %s\n", week[5]);
				break;
			case 6:
				printf(" %s\n", week[7]);
				break;
			case 7:
				printf(" %s\n", week[7]);
				break;
			default:
				printf(" too less\n");
				break;
		}
	}
	else
	{
		printf("input has some error\n");
	}
	return 0;
}
