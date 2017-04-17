#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

void Init_slist(pList* pplist)
{
	assert(pplist);    //要判断   要知道  空指针是不能解引用的
	*pplist = NULL;    //初始化维护链表的指针plist；
}
pNode BuyNode(DataType d)                    //负责把节点创建出来  接收一个放到数据域的数字然后返回這个节点的地址
{
	pNode pnode = (pNode)malloc(sizeof(Node));       
	if (pnode == NULL)
	{
		perror("malloc");
		return	NULL;
	}
	pnode->data = d;
	pnode->next = NULL;
	return pnode;
}
void PushBack(pList* pplist, DataType d)    //尾插
{
	assert(pplist);
	pNode pNewNode = BuyNode(d);
	if (*pplist == NULL)                  //当没有节点时
	{
		*pplist = pNewNode;
	}
	else
	{
		pNode cur =NULL;
		cur = *pplist;
		while (cur->next != NULL)      //当存在节点时  找到最后一个节点然后加上
		{
			cur = cur->next;
		}
		cur->next = pNewNode;
	}
}

void Print(pList plist)                  //打印
{  
	pNode cur = NULL;
	if (plist == NULL)
	{
		printf("没有节点\n");
		return;
	}
	cur = plist;
	while (cur != NULL)                  //注意：這里不要写成  cur->next != NULL   因为這样的话碰到最后一个节点就不会打印出来了
	{
		printf("%d -> ", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}


void Destoryslist(pList* pplist)      //释放空间
{
	pNode cur = *pplist;          
	assert(*pplist);
	while (cur != NULL)
	{
		pNode tmp = cur;
		cur = cur->next;
		free(tmp);
	}
	*pplist = NULL;
}

void PopBack(pList* pplist)   //要考虑没有节点的情况下   只有一个节点的情况下   
{
	assert(*pplist);
	pNode cur = *pplist;
	if (*pplist == NULL)
	{
		printf("链表为空\n");
		return;
	}
	else if (cur->next == NULL)
	{
		*pplist = NULL;
		return;
	}
	while (cur->next->next != NULL)
	{
		cur = cur->next;
	}
	free(cur->next);
	cur->next = NULL;
}

void PushFront(pList* pplist, DataType d)
{
	pNode pNewNode = BuyNode(d);
	assert(pplist);                         //assert  的使用方法和适用场景自己学的不够深入
	if (*pplist == NULL)
	{
		*pplist = pNewNode;
	}
	else
		pNewNode->next = *pplist;
	   *pplist = pNewNode;
}

void PopFront(pList* pplist)
{
	pNode cur = *pplist;
	pNode tmp = NULL;
	if (*pplist == NULL)
		return;
	else if (cur->next == NULL)
	{
		free(cur);
		*pplist = NULL;
	}
	else
	{
		tmp = *pplist;
		*pplist = cur->next;
		free(tmp);
		tmp = NULL;
     }
}

void Getslistlength(pList plist)
{
	int count = 0;
	pNode cur = plist;
	while (cur != NULL)
	{
		cur = cur->next;
		count++;
	}
	printf("链表的长度为：%d\n",count);

}



pNode Find(pList plist,DataType d)   //查找   返回的是地址
{   
	pNode cur = plist;
	if (plist == NULL)
	{
		printf("链表为空\n");
	}
	while (cur != NULL)
	{
		if (cur->data == d)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
//删除节点
void Remove(pList* pplist, DataType d)    //在這里面  我们唯一不好把握的就是這个链表的节点数
{
	assert(pplist);
	pNode cur = *pplist;
	pNode pnode = Find(*pplist, d);       //调用Find函数 找到节点的地址
	if (pnode == NULL)
	{
		printf("未找到\n");
		return;
	}
	if (cur == pnode)    // 如果找到的是第一个元素  调用头删 
	{
		PopFront(&cur);
		return;
	}
	else if (pnode->next == NULL)  //如果找到的是最后一个元素  调用尾删 
	{
		PopBack(&pnode);
		return;
	}
	while (cur->next != pnode)    //让cur找到pnode前面一个节点 
	{
		cur = cur->next;
	}
	cur->next = cur->next->next;  // pnode 左右相连 
	free(pnode);                //释放pnode
	pnode == NULL;
}
void RemoveAll(pList* pplist)
{


}
void Insert(pList* pplist, pNode pos, DataType d)    //指定位置插入
{
	assert(pplist);
	pNode pNewNode = BuyNode(d);
	pNode cur = *pplist;
	if (*pplist == NULL)
	{
		*pplist = pNewNode;
		return;
	}
	if (pos == *pplist)                        //如果pos在第一个节点处
	{
		pNewNode->next = pos->next;
		*pplist = pNewNode;
	}

	
	
}
void Erase(pList* pplist, pNode pos)                 //指定位置删除    pos是位置
{
	assert(pplist);
	pNode cur = *pplist;
	if (cur == pos)    // 如果找到的是第一个元素  调用头删 
	{
		PopFront(&cur);
		return;
	}
	else if (pos->next == NULL)  //如果找到的是最后一个元素  调用尾删 
	{
		PopBack(&pos);
		return;
	}
	while (cur->next != pos)    //让cur找到pos前面一个节点 
	{
		cur = cur->next;
	}
	cur->next = cur->next->next;  // pos 左右相连 
	free(pos);                //释放pos
	pos == NULL;
}
