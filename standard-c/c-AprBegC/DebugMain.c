/*******************************************************************************
 * File:   DebugMain.c
 * Author: Jedichou
 * Description:
 *   The file is a debug file. You can run this file under Netbeans 6.0 Beta.
 *   En, if you want you can wirte a MAKE file and complie by CYGWIN.
 *
 *   [Tools list]
 *   -- gcc (GCC) 3.3.3 (cygwin special)
 *   Copyright (C) 2002  Free Software Foundation, Inc.
 *   This is free software; see the source for copying conditions.
 *   There is NO warranty; not even for MERCHANTABILITY or FITNESS FOR A
 *   PARTICULAR PURPOSE.
 *
 *   -- GNU gdb 2003-09-20-cvs (cygwin-special)
 *   Copyright 2003 Free Software Foundation, Inc.
 *   GDB is free software, covered by the GNU General Public License, and you are
 *   welcome to change it and/or distribute copies of it under certain conditions.
 *   Type "show copying" to see the conditions.
 *   There is absolutely no warranty for GDB.  Type "show warranty" for details.
 *   This GDB was configured as "i686-pc-cygwin".
 *
 *   -- GNU make version 3.80
 *   Copyright (C) 2002  Free Software Foundation, Inc.
 *   This is free software; see the source for copying conditions.
 *   There is NO warranty; not even for MERCHANTABILITY or FITNESS FOR A
 *   PARTICULAR PURPOSE.
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/* Chapter 2 */
extern int program2_1(void);            /* Program 2-1 */
extern int program2_2(void);            /* Program 2-2 */
extern int program2_3(void);            /* Program 2-3 */
extern int program2_4(void);            /* Program 2-4 */
extern int program2_5(void);            /* Program 2-5 */
extern int program2_6(void);            /* Program 2-6 */
extern int program2_7(void);            /* Program 2-7 */
extern int program2_8(void);            /* Program 2-8 */
extern int program2_9(void);            /* Program 2-9 */
extern int program2_10(void);           /* Program 2-10 */
extern int program2_11(void);           /* Program 2-11 */
extern int program2_12(void);           /* Program 2-12 */
extern int program2_13(void);           /* Program 2-13 */
extern int program2_14(void);           /* Program 2-14 */
extern int program2_15(void);           /* Program 2-15 */
extern int program2_16(void);           /* Program 2-16 */
// extern int program2_17(void);           /* Program 2-17 */
extern int program2_18(void);           /* Program 2-18 */

/* Chapter 3 */
extern int program3_1(void);            /* Program 3-1 */
extern int program3_2(void);            /* Program 3-2 */
extern int program3_3(void);            /* Program 3-3 */
extern int program3_4(void);            /* Program 3-4 */
extern int program3_5(void);            /* Program 3-5 */
extern int program3_6(void);            /* Program 3-6 */
extern int program3_7(void);            /* Program 3-7 */
extern int program3_8(void);            /* Program 3-8 */
extern int program3_9(void);            /* Program 3-9 */
extern int program3_10(void);           /* Program 3-10 */
extern int program3_11(void);           /* Program 3-11 */

/* Chapter 4 */
extern int program4_1(void);            /* Program 4-1 */
extern int program4_2(void);            /* Program 4-2 */
extern int program4_3(void);            /* Program 4-3 */
extern int program4_4(void);            /* Program 4-4 */
extern int program4_5(void);            /* program 4-5 */
extern int program4_6(void);            /* Program 4-6 */
extern int program4_7(void);            /* Program 4-7 */
extern int program4_8(void);            /* Program 4-8 */
extern int program4_9(void);            /* Program 4-9 */
extern int program4_10(void);           /* program 4-10 */
extern int program4_11(void);           /* Program 4-11 */
extern int program4_12(void);           /* Program 4-12 */

/* Chapter 5 */
extern int program5_1(void);            /* Program 5-1 */
extern int program5_2(void);            /* Program 5-2 */
extern int program5_3(void);            /* Program 5-3 */
extern int program5_4(void);            /* Program 5-4 */
extern int program5_5(void);            /* Program 5-5 */
extern int program5_6(void);            /* Program 5-6 */
extern int program5_7(void);            /* Program 5-7 */

/* Chapter 6 */
extern int program6_1(void);            /* Program 6-1 */
extern int program6_2(void);            /* Program 6-2 */
extern int program6_3(void);            /* Program 6-3 */
extern int program6_4(void);            /* Program 6-4 */
extern int program6_5(void);            /* Program 6-5 */
extern int program6_6(void);            /* Program 6-6 */
extern int program6_7(void);            /* Program 6-7 */
extern int program6_8(void);            /* Program 6-8 */
extern int program6_9(void);            /* Program 6-9 */
// extern int program6_9a(void);          /* Program 6-9A */
extern int program6_10(void);           /* Program 6-10 */

/* Chapter 7 */
extern int program7_1(void);            /* Program 7-1 */
extern int program7_2(void);            /* Program 7-2 */
extern int program7_3(void);            /* Program 7-3 */
extern int program7_4(void);            /* Program 7-4 */
extern int program7_5(void);            /* Program 7-5 */
extern int program7_6(void);            /* Program 7-6 */
extern int program7_7(void);            /* Program 7-7 */
extern int program7_8(void);            /* Program 7-8 */
extern int program7_9(void);            /* Program 7-9 */
extern int program7_10(void);           /* Program 7-10 */
extern int program7_11(void);           /* Program 7-11 */
extern int program7_12(void);           /* Program 7-12 */
extern int program7_13(void);           /* Program 7-13 */
extern int program7_14(void);           /* Program 7-14 */
extern int program7_15(void);           /* Program 7-15 */

/* Chapter 8 */
extern int program8_1(void);            /* Program 8-1 */
extern int program8_2(void);            /* Program 8-2 */
extern int program8_3(void);            /* Program 8-3 */
extern int program8_4(void);            /* Program 8-4 */
  extern int program8_4_change(int number);  /* Program 8-4 */

/* Chapter 9 */
/* Chapter 10 */
/* Chapter 11 */
/* Chapter 12 */
/* Chapter 13 */

int main(int argc, char** argv) {
    program8_4();
    return (EXIT_SUCCESS);
}
