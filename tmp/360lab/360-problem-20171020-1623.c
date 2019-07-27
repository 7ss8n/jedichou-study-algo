#include <stdio.h>
int main() {
    int x,a,b,c;
    printf ("input x:\n");
    scanf("%d", &x);
	a = x/100%10;
	b = x/10%10;
	c = x/1%10;	
	printf("a:%d, b:%d, c:%d\n", a,b,c);
    printf("sum: %d\n", a*100+b*10+c);
	return 0;
}
