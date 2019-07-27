// output power number between 1 to 10
#include <stdio.h>
#include <math.h>

int isEven(int m) { return m%2==0?1:0; }
int main() {
	int a[10], i; 
	for(i=0; i<9; i++) a[i] = i+1;
	for(i=0; i<9; i++)
		if(isEven(i+1))
			printf("%f\n", pow((float)a[i], 2));
	return 0;
}
