/* mex05.c, The tokens passed to macros
 * can be contcatehanted using operator
 * ## call Token-Pasting operator. */
#define mg(a, b) a##b
main(_){printf("%d",mg(12, 34));}
