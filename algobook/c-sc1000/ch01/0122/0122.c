int max(int arr[], int size) {
	int i=1, m=arr[0];
	for(;i<size;i++)
		m=arr[i]<m?m:arr[i];
	return m;
}

int min(int arr[], int size) {
	int i=1, m=arr[0];
	for(;i<size;i++)
		m=arr[i]<m?arr[i]:m;
	return m;
}

int main() {
	int a[]={123,121,245,364,2,155};
	int s=sizeof(a)/sizeof(a[0]);
	printf("range is %d\n", max(a,s)-min(a,s));
	return 0;
}
