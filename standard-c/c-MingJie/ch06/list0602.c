/* MingJie C - list0602.c */

int max(int x, int y, int z) {
	int max = x;
	if ( y > max ) max = y;
	if ( z > max ) max = z;
	return max;
}

int main(void) {
	int na=1, nb=2, nc=3;
	int nd=4, ne=5, nf=6;
	printf("max1: %d\n", max(na,nb,nc));
	printf("max2: %d\n", max(nd,ne,nf));
	return 0;
}
