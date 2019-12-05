// 获取最大值
int getMax(int a[], int size) {
	int max = a[0], i;
	for(i=1;i<size;i++)
	    if (a[i] > max)
	        max = a[i];
	return max;
}

int main(){
	int a[] ={1,2,3,4,5};
	int size = sizeof(a)/sizeof(a[0]);
	printf("%d\n",getMax(a, size));
}