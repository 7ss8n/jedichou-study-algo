#include <stdio.h>
#include <math.h>
int main(void) {
	int i,j;
	for(i=-9; i<=9; i++) {
		for(j=1; j<=abs(i); j++)
			printf(" ");
		for(j=-9; j<=-2*abs(i)+19; j++)
		printf("%c", '*');
		printf("\n");
	}
	return 0;
}
