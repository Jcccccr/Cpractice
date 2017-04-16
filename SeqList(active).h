
// 顺序表动态版本                         // 动态版本注意事项：   开辟空间在退出时一定要记得再封装一个释放空间的函数
#ifndef __SEQLIST_H__
#define __SEQLIST_H__

#endif //__SEQLIST_H__

#define DEFAULT 3
#define ADD_SZ 2

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

typedef int DataType;

typedef struct SeqList
{
	DataType* parr;
	int count;
	int capacity;
}SeqList, *pSeqList;


void Init_SeqList(pSeqList p);
void Add_capacity(pSeqList p);
void Destroy_capacity(pSeqList p);
void PushBack(pSeqList p, DataType d);
void PushFront(pSeqList p, DataType d);
void PopBack(pSeqList p);
void PopFront(pSeqList p);
int  Find(pSeqList p, DataType d);
void Remove(pSeqList p, DataType d);
void RemoveAll(pSeqList p);
void Sort(pSeqList p);
int  BinarySearch(pSeqList p, DataType d);
void Show(pSeqList p);
