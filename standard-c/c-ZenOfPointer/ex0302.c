// ex0302.c
// run: tcc -run ex0302.c

#include <stdio.h>
typedef unsigned int uint8_t;
extern void swapdata(uint8_t *dat_x, uint8_t *dat_y);

int main(void)
{
	uint8_t x, y;
	uint8_t *p_x, *p_y;
	
	printf("Pls input two numbers: ");
	scanf("%d,%d", &x, &y);
	
	p_x = &x;
	p_y = &y;
	
	printf("Before x=%d, y=%d\n", x, y);
	swapdata(p_x, p_y);
	printf("After x=%d, y=%d\n", x, y);
	
	return 0;
}

// Jedi: 傳遞指針可交換成功
void swapdata(uint8_t *dat_x, uint8_t *dat_y)
{
	uint8_t temp;
	temp = *dat_y;
	*dat_y = *dat_x;
	*dat_x = temp;
}