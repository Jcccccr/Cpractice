

#ifndef __SEQLIST_H__
#define __SEQLIST_H__

#endif //__SEQLIST_H__

#define MAX 100
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

typedef int DataType;

typedef struct SeqList
{
	DataType arr[MAX];
	int count;
}SeqList,*pSeqList;


void Init_SeqList(pSeqList p);
void PushBack(pSeqList p , DataType d);
void PushFront(pSeqList p,DataType d);
void PopBack(pSeqList p);
void PopFront(pSeqList p);
int  Find(pSeqList p,DataType d);
void Remove(pSeqList p, DataType d);
void RemoveAll(pSeqList p);
void Sort(pSeqList p);
int  BinarySearch(pSeqList p, DataType d);
void Show(pSeqList p);
