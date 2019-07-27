float median(float array[], int size) {
	int n=size/2;
	return (size%2 != 0)?array[n]:(array[n]+array[n+1])/2;
}

int main() {
	float array[]={1,2,3,4,5,6,7,8,9};
	printf("%f\n", median(array, 9));
	return;
}
