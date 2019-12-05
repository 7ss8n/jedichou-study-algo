// ex0301.c
// run: tcc -run ex0301.c

#include <stdio.h>
typedef unsigned int uint8_t;
extern void swapdata(uint8_t dat_x, uint8_t dat_y);

int main(void)
{
	uint8_t x, y;
	
	printf("Pls input two numbers: ");
	scanf("%d,%d", &x, &y);
	
	printf("Before x=%d, y=%d\n", x, y);
	swapdata(x, y);
	printf("After x=%d, y=%d\n", x, y);
	
	return 0;
}

// Jedi: 因為默認為值傳遞，故無法交換成功
void swapdata(uint8_t dat_x, uint8_t dat_y)
{
	uint8_t temp;
	temp = dat_y;
	dat_y = dat_x;
	dat_x = temp;
}