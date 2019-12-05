int count(int a[], int size, int x) {
	int i, frequency=0;
	for(i=0;i<size;i++)
		if(a[i]==x)
			frequency++;
	return frequency;
}

int mode(int a[], int size) {
	int i=0,temp=a[0];
	for(;i<size;i++)
		if(count(a,size,a[i]) < count(a,size,a[i+1]))
			temp=a[i+1];
	return temp;
}

int main() {
	/*find mode*/
	int a[] = {1,2,2,2,3};
	printf("mode is %d\n", mode(a,5));
	return;
}
