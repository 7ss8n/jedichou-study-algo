/*
 * Crazy C - code sample - 0505
 * Question: Input a integer that length less than ten.
 *   Convert output and give length of it.
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 
 #define MAX_LENGTH 10
 
 int main(void)
 {
	int integer, counter = 0;
	
	// Give screen tips and get a integer from keyboard.
	printf("Please input a integer (Length: 0-9)\n");
	scanf("%d", &integer);
	
	// Process integer
	if( integer < 0 ) {
		printf("-");
		integer = -integer;
	}
	do {
		printf("%d", integer % MAX_LENGTH);
		counter += 1;
		integer /= MAX_LENGTH;
	} while( integer != 0);
	
	// Output final result.
	printf("\nThis number's length is %d.\n", counter);
	
	return 0;
 }