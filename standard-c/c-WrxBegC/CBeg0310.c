/*
 * File name: CBeg0310.c
 * Descript: Exercising bitwise operator
 */

#include <stdio.h>

int main(void)
{
    unsigned int original = 0xABC;
    unsigned int result = 0;
    unsigned int mask = 0xF;
    
    printf("\n original = %X", original);
    
    /* Insert first digit in result */
    result |= original&mask; /* Put right 4 bits from orginal in result */
    
    /* Get third digit */
    original >>= 4;
    result <<= 4;
    result |= original&mask;
    
    /* get third digit */
    original >>= 4;
    result <<= 4;
    result |= original&mask;
    printf("\t result = %X\n", result);

    return 0;
}
