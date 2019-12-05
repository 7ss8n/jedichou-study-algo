int Add(int adt[], int start, int end) {
	int i = start, sum = 0;
	for(; i<=end; i++)
		sum += adt[i];
	return sum;
}

int main() {
	int a[5] = {0, 1, 2, 3, 4};
	printf("%d\n", Add(a, 0, 4));
}
