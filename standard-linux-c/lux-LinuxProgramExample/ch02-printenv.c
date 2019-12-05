/********************************************************************
 * File name : ch02-printenv.c
 * Description: Print out the enviroment.
 * From : Linux Program by Example.pdf, Page 57
 * 
 * Program can executed under cygwin-cd-release-20060906
 *   gcc version 3.4.4 (cygming special) (gdc 0.12, using dmd 0.125)
 *
 ********************************************************************
 * Issue at 2013-2-2 11:11
 *   Compile at Windows XP use by gcc version 3.4.5 will get
 *   error message. It is like < xxx\Temp/cci4xVS1.0:ch02-printevn.c:
 *   (.text+0x2c):undefined * reference to 'environ' >.
 *   
 *   -- gcc version 3.4.5 (mingw-vista special r3)
 ********************************************************************
 */
#include <stdio.h>

extern char **environ;

int main(int argc, char *argv[])
{
	int i;
	
	if(environ != NULL)
		for( i=0; environ[i] != NULL; i++)
			printf("%s\n", environ[i]);
	exit(0);
}
