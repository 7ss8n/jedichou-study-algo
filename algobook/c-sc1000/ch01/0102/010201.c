// use point to iterate one dimision array
int main() {
	int my_array[4] = {10, 20, 30, 40}, i;
	for(i = 0; i < sizeof(my_array)/sizeof(my_array[0]); i++)
		printf("%d\n", *(my_array+i));
}
