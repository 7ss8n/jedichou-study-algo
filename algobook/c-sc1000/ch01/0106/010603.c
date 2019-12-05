// file: 010603.c
// desc: 如何仅仅把数组中的奇数元素加起来

int oddadd(int adt[], int size) {
	int sum = 0, i = 0;
	for(; i < size; i++)
		if( adt[i] % 2 != 0)
			sum += adt[i];
	return sum;
}

int main() {
	int intarray[] = {1,2,3,4,5,6,7,8,9,10};
	int size = sizeof(intarray) / sizeof(intarray[0]);
	printf("%d\n", oddadd(intarray, size));
}
