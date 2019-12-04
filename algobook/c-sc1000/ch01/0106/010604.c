// file: 010604.c
// desc: 如何把一个元素加到数组的每一个元素上

void addanum(int array[], int size, int number) {
	int i = 0;
	for(; i < size; i++)
		array[i] += number;
}

int main() {
	int adt[] = {1, 2, 3}, num = 5, i = 0;
	int size = sizeof(adt) / sizeof(adt[0]);
	
	addanum(adt, size, num);
	for(; i < size; i++)
		printf("%d\n", adt[i]);
}
