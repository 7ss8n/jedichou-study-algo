// file: 010605.c
// desc: ��δ������ÿһԪ���м�ȥĳ��Ԫ��

void subanum(int array[], int size, int number) {
	int i = 0; 
	for(; i < size; i++ ) array[i] -= number;
}

int main() {
	int adt[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i = 0;
	int size = sizeof(adt) / sizeof(adt[0]);
	subanum(adt, size, 1);
	for(; i < size; i++)
		printf("%d\n", adt[i]);
}
