/*
 * File: brances.c
 * Description: The Demo show codes at brances can be executed.
 * Author: Jedi Chou, skyzhx@163.com
 * Date: 2019.1.15 13:56 AM
 *   tcc version 0.9.27 (x86_64 Linux)
 *   gcc (Ubuntu 7.3.0-16ubuntu3) 7.3.0
 */
#include <stdio.h>
int main()
{
	int x = 1, y, z;
	{ printf("%d\n", x); }
	{ printf("%d\n", y); printf("%d\n", z);}
}
