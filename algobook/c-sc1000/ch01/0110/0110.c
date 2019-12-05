// demo: 如何删除数组中的某个特定数据项
// method: 1. 按数据项删除, 2. 按位置删除
// step:
//   1. 找出要被删除的数据项的位置
//   2. 对于位于要被删除元素右侧的所有元素，其下标减1.对于位于要被删除元素前面的元素，其下标保持不变
//   3. 要被删除的元素被紧跟在其后面对元素覆盖
//   4. 这个过程持续进行，直到数据的末尾位置。被删除数据项后面的元素下标都被减少1.

void display(int a[], int size) {
	int i = 0;
	for(; i<size; i++) printf("%d ", a[i]);
	printf("\n");
}

void delete_item(int a[], int size, int x) {
	int i, k, flag = 0;
	for(i=0; i<size;i++) if (a[i] == x) { flag = 1; break; }
	
	if (flag == 1)
		for(k=i; k<size-1; k++)
			a[k] = a[k+1];
	else
		printf("The value is not found!\n");
}

int main() {
	// define and output
	int a[10] = {1,2,3,4,5,6,7,8,9,10}; 
	display(a, 10);

	// delete_item(a, 10, 3);
	delete_item(a, 10, 3); 
	display(a, 9);

	// delete_item(a, 9, 1);
 	delete_item(a, 9, 1); 
	display(a, 8);
}
