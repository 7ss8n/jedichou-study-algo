/* head first c - find queen, page 69 */
#include <stdio.h>
int main()
{
	char *cards = "JQK";
	char a_card = cards[2]; /* K */
	cards[2] = cards[1]; /* Q, JQQ */
	cards[1] = cards[0]; /* Q, JJQ */
	cards[0] = cards[2]; /* Q, QJQ */
	cards[2] = cards[1]; /* J, QJJ */
	cards[1] = a_card;   /* K, QKJ */
	puts(cards);
	return 0;
}
