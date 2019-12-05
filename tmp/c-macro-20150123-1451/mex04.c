/* mex04.c, The macro arguments are not
 * evaluated before macro expansion.
 * For example consider the following
 * program. */
#define MUL(a, b) a*b
main(_){printf("%d",MUL(2+3,3+5));}
