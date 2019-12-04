// 获取最小值
int getMin(int a[], int size) {
	int min = a[0], i;
	for(i=1;i<size;i++)
	    if (a[i] < min)
	        min = a[i];
	return min;
}

int main(){
	int a[] ={1,2,3,4,5,-1};
	int size = sizeof(a)/sizeof(a[0]);
	printf("%d",getMin(a, size));
}