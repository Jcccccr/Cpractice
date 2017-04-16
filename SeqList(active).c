#define _CRT_SECURE_NO_WARNINGS 1


#include"SeqList(active).h"

void Init_SeqList(pSeqList p)
{
	assert(p);
	p->count = 0;
	p->parr = (DataType*)malloc(sizeof(DataType)*DEFAULT);
	if (NULL == p->parr)
	{
		perror("malloc");          //报错形式
		return;
	}
	p->capacity = DEFAULT;
	memset(p->parr, 0, sizeof(DataType)*DEFAULT);
}

void Add_capaticy(pSeqList p)            //增容
{ 
	assert(p);
	if (p->count == p->capacity)
	{
		DataType* tmp = (DataType*)realloc(p->parr, sizeof(DataType)*(DEFAULT + ADD_SZ));
		if (NULL == tmp)
		{
			printf("增容失败\n");
			return;
		}
		p->parr = tmp;
	}
	p->capacity += ADD_SZ;
}
void Destroy_capacity(pSeqList p)                       //释放堆空间    千万不要忘了
{   
	assert(p);
	free(p->parr);
}
void PushBack(pSeqList p, DataType d)
{
	assert(p);
	Add_capaticy(p);
	p->parr[p->count] = d;
	p->count++;
}

void PushFront(pSeqList p, DataType d)
{
	assert(p);
	Add_capaticy(p);
	int i = 0;
	for (i = p->count; i > 0; i--)
	{
		p->parr[i] = p->parr[i - 1];
	}
	p->parr[0] = d;
	p->count++;
}
void PopBack(pSeqList p)
{
	assert(p);
	p->count--;
}

void PopFront(pSeqList p)
{
	assert(p);
	int i = 0;
	for (i = 0; i < p->count - 1; i++)
	{
		p->parr[i] = p->parr[i + 1];
	}
	p->count--;

}

int  Find(pSeqList p, DataType d)
{
	assert(p);
	int i = 0;
	for (i = 0; i < p->count; i++)
	{
		if (p->parr[i] == d)
			return i;
	}
	return -1;
}

void Remove(pSeqList p, DataType d)
{
	assert(p);
	int ret = Find(p, d);
	int i = 0;
	if (-1 == ret)
		printf("未找到\n");
	else
	for (i = ret; i < p->count - 1; i++)
	{
		p->parr[i] = p->parr[i + 1];
	}
	p->count--;
}

void RemoveAll(pSeqList p)    //我這样写	。。。。。   不算偷懒吧
{
	assert(p);
	p->count = 0;
}

void Sort(pSeqList p)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < p->count - 1; i++)
	{
		for (j = 0; j < p->count - 1 - i; j++)
		{
			if (p->parr[j] >  p->parr[j + 1])
			{
				DataType tmp = p->parr[j];
				p->parr[j] = p->parr[j + 1];
				p->parr[j + 1] = tmp;            //注意這里的i是循环次数   這里的j是下标
			}
		}
	}

}

int  BinarySearch(pSeqList p, DataType d)
{
	Sort(p);
	int left = 0;
	int right = p->count - 1;
	while (left <= right)
	{
		int mid = left - ((left - right) >> 1);     //解决内存溢出   注意：  (left+right)/2  以及 (left+right)>>1  都是不能解决内存溢出的
		if (p->parr[mid] < d)
		{
			left = mid + 1;
		}
		else if (p->parr[mid] > d)
		{
			right = mid - 1;
		}
		else
			return mid;
	}
	return -1;
}
void Show(pSeqList p)
{
	assert(p);
	int i = 0;
	if (p->count == 0)
	{
		printf("顺序表为空\n");
		return;
	}
	for (i = 0; i < p->count; i++)
	{
		printf("%d ", p->parr[i]);
	}
	printf("\n");
}
