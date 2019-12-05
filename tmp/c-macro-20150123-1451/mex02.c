/* mex02.c, "macro example 02"
   ref url: geeksforgeeks.org/interesting-facts-preprocessors-c/

   2) When we use define for a constant, the preprocessors
   produces a C program where the defined constant is
   searched and matching tokens are replaced with the
   given expression. For example in the following program
   max is define as "". */
#define m ""
main(){puts(m);}