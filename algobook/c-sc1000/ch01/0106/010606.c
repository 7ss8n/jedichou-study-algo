// file: 010606.c
// desc: ��ν�һ��Ԫ�س������ݵ�ÿһ��Ԫ��

void mulnumber(int array[], int size, int number) {
	int i = 0;
	for(; i < size; i++) array[i] *= number;
}

int main() {
	int adt[] = {1, 2, 3}, i = 0, num = 2;
	int size = sizeof(adt) / sizeof(adt[0]);
	mulnumber(adt, size, num);
	for(; i < size; i++)
		printf("%d\n", adt[i]);
}
