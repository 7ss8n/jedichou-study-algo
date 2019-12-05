// SeqList.c
// Description:
// void SeqListInit(SeqListType *SL);
// int SeqListLength(SeqListType *SL);
// int SeqListAdd(SeqListType *SL, DATA data);
// int SeqListInsert(SeqListType *SL, int n, DATA data);
// int SeqListDelete(SeqListType *SL, int n);
// DATA *SeqListFindByNum(SeqListType *SL, int n);
// int SeqListFindByCont(SeqListType *SL, char *key);
// int SeqListAll(SeqListType *SL);

//////////////////////////////////////////////////////
// 初始化顺序表
void SeqListInit(SeqListType *SL)
{
	SL->ListLen = 0;
}

//////////////////////////////////////////////////////
// 获得顺序表的长度
int SeqListLength(SeqListType *SL)
{
	return (SL->ListLen);
}

// Add a element to SeqList
int SeqListAdd(SeqListType *SL, DATA data)
{
	if (SL->ListLen >= MAXSIZE)
	{
		printf("The SeqList is full, can not add elements");
		return 0;
	}
	SL->ListData[++SL->ListLen]=data;
}

// Insert a data to special location of SeqList
int SeqListInsert(SeqListType *SL, int n, DATA data)
{
	int i;

	if (SL->ListLen >= MAXSIZE)
	{
		printf("The SeqList is full, can not add elements");
		return 0;
	}

	if ( n < 1 || n > SL->ListLen-1)
	{
		printf("Node Id is wrong.");
		return 0;
	}

	for (i=SL->ListLen; i>n; i--)
		SL->ListData[i+1] = SL->ListData[i];	// 从后移动
	SL->ListData[n] = data;						// 插入数据
	SL->ListLen++;								// 长度计数器加1
	return 1;
}

// 删除有序列表上指定位置的数据
int SeqListDelete(SeqListType *SL, int n)
{
	int i;	// 定义计数器

	if (n < 1 || n > SL->ListLen)
	{
		// 
		printf("Node Id is wrong");	// 节点错误信息
		return 0;					// 错误时返回zero
	}


}

 /* 
 * 
 * DATA *SeqListFindByNum(SeqListType *SL, int n);
 * int SeqListFindByCont(SeqListType *SL, char *key);
 * int SeqListAll(SeqListType *SL);
 */
