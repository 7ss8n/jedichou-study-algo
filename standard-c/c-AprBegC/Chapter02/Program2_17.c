/*******************************************************************************
 * File name    : Program2_17.c
 * Create time  : 2008-1-29 19:03
 * Description  :
 *   Working with complex numbers
 ******************************************************************************/

//*
// Tips 1 : complex.h在cygwin的路徑中無法找到
// Tips 2 : build sucess under Code::Blocks 10.05
#include <complex.h>
#include <math.h>
#include <stdio.h>

int program2_17(void) {
    double complex cx = 1.0 + 3.0*I;
    double complex cy = 1.0 - 4.0*I;

    printf("Working with complex numbers:");
    printf("\nStarting values: cx = %.2f%+.2fi cy = %.2f%+.2fi",
            creal(cx), cimag(cx), creal(cy), cimag(cy));

    double complex sum = cx+cy;
    printf("\n\nThe sum cx + cy = %.2f%+.2fi",
            creal(sum), cimag(sum));

    double complex difference = cx-cy;
    printf("\n\nThe difference cx - cy = %.2f%+.2fi",
            creal(difference), cimag(difference));

    double complex product = cx*cy;
    printf("\n\nThe product cx * cy = %.2f%+.2fi",
            creal(product), cimag(product));

    double complex quotient = cx/cy;
    printf("\n\nThe quotient cx / cy = %.2f%+.2fi",
            creal(quotient), cimag(quotient));

    double complex conjugate = conj(cx);
    printf("\n\nThe conjugate of cx = %.2f%+.2fi",
            creal(conjugate) , cimag(conjugate));
    printf("\n");

    return 0;
}
//*/
