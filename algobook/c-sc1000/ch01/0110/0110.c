// demo: ���ɾ�������е�ĳ���ض�������
// method: 1. ��������ɾ��, 2. ��λ��ɾ��
// step:
//   1. �ҳ�Ҫ��ɾ�����������λ��
//   2. ����λ��Ҫ��ɾ��Ԫ���Ҳ������Ԫ�أ����±��1.����λ��Ҫ��ɾ��Ԫ��ǰ���Ԫ�أ����±걣�ֲ���
//   3. Ҫ��ɾ����Ԫ�ر�������������Ԫ�ظ���
//   4. ������̳������У�ֱ�����ݵ�ĩβλ�á���ɾ������������Ԫ���±궼������1.

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
