float ArrayAdd(float adt[], int start, int end, int flag) {
	int i = start;
	float sum = 0;

	if (flag == 0)
		for(; i<=end; i++)
			sum += adt[i];

	if (flag == 1) {
		i = start%2 == 0 ? start : start+1;
		for(; i<=end;i+=2) 
			sum += adt[i];
	}

	if (flag == 2) {
		i = start%2 != 0 ? start : start+1;
		for(; i<=end;i+=2) 
			sum += adt[i];
	}

	return sum;
}

int main() {
	float adt[5] = {0, 1.0, 2.0, 3.0, 4.0};
	printf("all is %f\n", ArrayAdd(adt, 0, 4, 0));
	printf("all is %f\n", ArrayAdd(adt, 0, 4, 1));
	printf("all is %f\n", ArrayAdd(adt, 0, 4, 2));
}
