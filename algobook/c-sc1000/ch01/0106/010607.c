// file: 010607.c
// desc: 如何让数组的每一个元素处以某个元素

void divnumber(int array[], int size, int number) {
	int i = 0;
	for(; i < size; i++) array[i] /= number;
}

int main() {
	int adt[] = {2, 4, 6}, i = 0, num = 2;
	int size = sizeof(adt) / sizeof(adt[0]);
	divnumber(adt, size, num);
	for(; i < size; i++)
		printf("%d\n", adt[i]);
}
