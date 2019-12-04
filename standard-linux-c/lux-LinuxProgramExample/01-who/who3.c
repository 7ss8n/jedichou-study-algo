/* who3.c - who with buffered reads
 * 		  - suppresses empty records
 * 		  - formats time nicely
 * 		  - buffers input (using utmplib)
 *
 * 2013-2-18, can't compile under CYGWIN, because utmp.h does not exists.
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <utmp.h>
#include <fcntl.h>
#include <time.h>

#define SHOWHOST

void showtime(long);
void show_info(struct utmp *);

int main(void)
{
	struct utmp *utbufp,		/* holds pointer to next rec */
		   *utmp_next();		/* returns pointer to next */

	/*
	if( utmp_open( UTMP_FILE ) == -1) {
		perror(UTMP_FILE);
		exit(1);
	}
	
	while( (utbufp = utmp_next() ) != ((struct utmp *) NULL) )
		show_info( utbufp );
	*/
	utmp_close();
	return 0;
}

/*
 * show_info()
 * 		displays the contents of the utmp struct
 * 		in human readable from
 * 		* displays nothing if record has no user name
 */
void show_info( struct utmp * utbufp)
{
	if( utbufp->ut_type != USER_PROCESS )
		return;

	printf("%-8.8s", utbufp->ut_name);	/* the logname */
	printf(" ");							/* a space */
	printf("%-8.8s", utbufp->ut_line);	/* the tty */
	printf(" ");							/* a space */
	showtime( utbufp->ut_time );			/* display time */
#ifdef SHOWHOST
	if( utbufp->ut_host[0] != '\0')
		printf("(%s)", utbufp->ut_host);	/* the host */
#endif
		printf("\n");
}

/*
 * display time in a format fit for human consumption
 * uses ctime to build a string 12 chars wide and LIMITS
 * it to 12chars
 */
void showtime( long timeval )
{
	char * cp;					/* to hold address of time */
	cp = ctime(&timeval);		/* convert time to string */
								/* string looks like */
								/* Mon Feb 4 00:46:40 EST 1991 */
								/* 0123456789013456. */
	printf("%12.12s", cp+4);	/*pick 12 chars from pos 4 */
}

