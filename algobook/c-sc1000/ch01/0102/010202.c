// use index to iterate two dim array
// notice the array dont initialize
int main() {
	int my_2d_array[10][10], i, j;
	for(i=0; i<10; i++)
		for(j=0; j<10; j++)
			printf("%d\n", my_2d_array[i][j]);
}
