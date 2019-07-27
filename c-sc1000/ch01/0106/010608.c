int powarray(int array[], int size) {
	return array[size] * array[size];
}

int main() {
	int adt[] = {1, 2, 3}, i = 0;
	int size = sizeof(adt) / sizeof(adt[0]);
	for(; i < size; i++)
		printf("%ld\n", powarray(adt, i));
}
