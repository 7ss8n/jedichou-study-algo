/* mex03.c
3. The macros can take function like
arguments, the arguments are not 
checked for data type. For example,
the following macro Incre(x) can be
used for x any data type. */
#define I(x) ++x
main(){char *p="Geek";int x=10;printf("%s,%d",I(p),I(x));}