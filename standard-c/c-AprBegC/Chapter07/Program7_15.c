/*******************************************************************************
 * Filename     : Program7_15.c
 * Create time  : 2007/12/29 am 12:08
 * Description  :
 *   Program 7.15 An improved calculator
 *
 *  [Problem]
 *  The Problem you'll address is to rewrite calculator program that you wrote
 *  in Chapter 3 with some new features, but this time using pointers. The main
 *  improvements are as follows:
 *
 *  Feature 1 : Allow the use of signed decimal numbers, including a decimal
 *  point with an optional leading sign, - or +, as well as signed Integers.
 *
 *  Feature 2 : Permit expressions to combine multiple operations such as
 *  2.5+3.7-6/6.
 *
 *  Feature 3 : Add ^ operator, which will be raised to power, so 2^3 will
 *  produce 8.
 *
 *  Feature 4 : Allow a line to on the previous result. If the previous result
 *  is 2.5, then writing =2*7 will procedure the result 12. any input line that
 *  with an assignment operator will automatically assueme the left operand is
 *  the previous result.
 *
 *  [Step-1]
 *  As you saw earlier in this chapter, the scanf() function doesn't allow you
 *  to read a complete string that contains spaces, as it stops at the first
 *  whitespaces character. You'll therefore read the input expression using the
 *  gets() function that's declared in the <stdio.h> libaray header file. This
 *  will read an entire line of input, including spaces. You can actually combine
 *  the input and the overall program loop together as follows:
 *
 *  [Step-2]
 *  The input expression two forms. It can start with an assignment operator,
 *  indicating that the last result is to be taken as the left operand, or it can
 *  start with a number with or without a sign. You can differentiate these two
 *  situations by looking for the '=' character first. If you find one, the left
 *  operand is the previous result.
 *
 *  The code you need to add next in the while llp will look for an '=', and if
 *  it doesn't find one it will look for a substring that is numeric that will
 *  be the left operand.
 *
 *  [Step-3]
 *  At this point, what follows in the input string is very well-defined. It must
 *  be an operator followed by a number. The operator will have the number that
 *  you found previously as its left operand, or the previous result. This
 *  "op-number" combination may also be followed by another, so you have a
 *  possible succession of op-number combinations through to the end of the
 *  string. You can deal with this in a loop that will look for these combinations:
 *
 *  [Step-4]
 *  You can use a switch statement to select the operation to be carried out
 *  basesd on the operand. This is essentially the same code that you used in
 *  the previous calculator. You'll also display the output and add a prompt at
 *  beginning of the program on how the calculator is used. Here's the complete
 *  code for the program, with the last code you're adding in bold: *
 ******************************************************************************/

#include <stdio.h>              /* Standard input/output                    */
#include <string.h>             /* For string functions                     */
#include <ctype.h>              /* For classifying characters               */
#include <stdlib.h>             /* For converting string to numric values   */
#include <math.h>               /* Length of input buffer                   */

#define BUFFER_LEN 256

int program7_15(void) {
    char input[BUFFER_LEN];     /* Input expression                         */
    char number_string[30];     /* Stores a number string from input        */
    char op = 0;                /* Stores an operator                       */
    unsigned int index =0;      /* Index of the current character in input  */
    unsigned int to = 0;        /* Length of the string in input            */
    size_t input_length = 0;    /* Length of the sting in input             */
    unsigned int number_length = 0;  /* Length of the string in number_string */
    double result = 0.0;        /* The result of an operation               */
    double number = 0.0;        /* Stores the value of number_string        */
    
    printf("\nTo use this calculator, enter any expression with"
            " or without spaces");
    printf("\nAn expression may include the operators:");
    printf("\n +, -, *, /, %%, or ^(raise to a power).");
    printf("\nUse = at the beginning of a line to operate on ");
    printf("\nthe result of the previous calculation.");
    printf("\nUse quit by itself to stop the calculator.\n\n");
    
    /* The main calculator loop */
    while(strcmp(fgets(input, BUFFER_LEN, stdin), "quit\n") != 0) {
        input_length = strlen(input);       /* Get the input string length  */
        input[--input_length] = '\0';       /* Remove newline at the end    */
        
        /* Remove all spaches from the input by copying the string to itself */
        /* including the string terminating character                        */
        for(to = 0, index = 0 ; index<=input_length ; index++)
            if(*(input+index) != ' ')               /* If it is not a space */
                *(input+to++) = *(input+index);     /* Copy the character   */
        
        input_length = strlen(input);       /* Get the new string length    */
        index = 0;                          /* Start at the first character */
        
        if(input[index]== '=')              /* Is there =? */
            index++;                        /* Yes so skip over it */
        else {                              /* No - look for the left operand */
            /* Look for a number that is the left operand for the 1st operator */
            /* Check for sign and copy it */
            number_length = 0;                                          /* Initialize length */
            if(input[index]=='+' || input[index]=='-')                  /* Is it + or -? */
                *(number_string+number_length++) = *(input+index++);    /* Yes so copy it */
            /* Copy all following digits */
            for( ; isdigit(*(input+index)) ; index++)                   /* Is it a digit? */
                *(number_string+number_length++) = *(input+index);      /* Yes - Copy it */
            /* copy any fractional part */
            if(*(input+index)=='.') /* Is it decimal point? */ {        /* Yes so copy the decimal point and the following digits */
                *(number_string+number_length++) = *(input+index++);    /* Copy point */
                for( ; isdigit(*(input+index)) ; index++)               /* For each digit */
                    *(number_string+number_length++) = *(input+index);  /* copy it */
            }
        }
        
        *(number_string+number_length) = '\0';                          /* Append string terminator */
        /* If we have a left operand, the length of number_string */
        /* will be > 0. In this case convert to a double so we */
        /* can use it in the calculation */
        if(number_length>0)
            result = atof(number_string);                               /* Store first number as result */
    }
    
    /* Now look for 'op number' combinations */
    for(;index < input_length;) {
        op = *(input+index++);                                          /* Get the operator */
        /* Copy the next operand and store it in number */
        number_length = 0;                                              /* Initialize the length */
        /* Check for sign and copy it */
        if(input[index]=='+' || input[index]=='-')                      /* Is it + or -? */
            *(number_string+number_length++) = *(input+index++);        /* Yes - copy it. */
        /* Copy all following digits */
        for( ; isdigit(*(input+index)) ; index++)                       /* For each digit */
            *(number_string+number_length++) = *(input+index);          /* copy it. */
        /* copy any fractional part */
        if(*(input+index)=='.') /* Is it a decimal point? */ { /* Copy the decimal point and the following digits */
            /* Copy point */
            *(number_string+number_length++) = *(input+index++);
            for( ; isdigit(*(input+index)) ; index++)                   /* For each digit */
                *(number_string+number_length++) = *(input+index);      /* copy it. */
        }
        *(number_string+number_length) = '\0';                          /* terminate string */
        /* Convert to a double so we can use it in the calculation */
        number = atof(number_string);
        
        /* Execute operation, as 'result op= number' */
        switch(op) {
            case '+':                   /* Addition */
                result += number;
                break;
            case '-':                   /* Subtraction */
                result -= number;
                break;
            case '*':                   /* Multiplication */
                result *= number;
                break;
            case '/':                   /* Division */
                /* Check second operand for zero */
                if(number == 0)
                    printf("\n\n\aDivision by zero error!\n");
                else
                    result /= number;
                break;
            case '%': /* Modulus operator - remainder */
                /* Check second operand for zero */
                if((long)number == 0)
                    printf("\n\n\aDivision by zero error!\n");
                else
                    result = (double)((long)result % (long)number);
                break;
            case '^': /* Raise to a power */
                result = pow(result, number);
                break;
            default: /* Invalid operation or bad input */
                printf("\n\n\aIllegal operation!\n");
                break;
                
        }
        printf("= %f\n", result); /* Output the result */
    }
    
    return 0;
}
