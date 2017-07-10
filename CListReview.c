#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
#include<stdlib.h> 

//C实现简单无头单链表和基本的操作
typedef int Datatype;
typedef struct ListNode
{
	Datatype _data;
	struct ListNode* _next;
}Node;

Node* _head = NULL;

Node* CreatNode(Datatype data)
{
	Node* NewNode = (Node*)malloc(sizeof(Node));
	if (NewNode == NULL)
	{
		perror("malloc");
		return;
	}
	NewNode->_data = data;
	NewNode->_next = NULL;
	return NewNode;
}

void PushBack(Datatype data)
{
	if (_head == NULL)
		_head = CreatNode(data);
	else
	{
		Node* cur = _head;
		while (cur->_next)
		{
			cur = cur->_next;
		}
		cur->_next = CreatNode(data);
	}
}

void PushFront(Datatype data)
{
	if (_head == NULL)
		_head = CreatNode(data);
	else
	{
		Node* NewNode = CreatNode(data);
		Node* NextNode = _head;
		_head = NewNode;
		NewNode->_next = NextNode;
	}
}

void PopBack()
{
	if (_head == NULL)         //没有元素
	{
		printf("链表为空\n");
		return;
	}
	else if (_head->_next == NULL)    //只有一个元素
	{
		free(_head);
		_head = NULL;
	}
	else
	{
		Node* cur = _head;
		Node* prev = NULL;
		while (cur->_next)
		{
			prev = cur;
			cur = cur->_next;
		}
		prev->_next = NULL;
		free(cur);
	}
	return;
}
void PopFront()
{
	if (_head == NULL)
	{
		printf("链表为空\n");
		return;
	}
	else if (_head->_next == NULL)
	{
		_head = NULL;
		return;
	}
	else
	{
		Node* tmp = _head;
		Node* newhead = _head->_next;
		_head = newhead;
		free(tmp);
	}
	return;
}
Node* Find(Datatype data)         //查找某个数字
{
	if (_head == NULL)
	{
		printf("链表为空\n");
		return NULL;
	}
	else
	{
		Node* cur = _head;
		while (cur)
		{
			if (cur->_data == data)
				return cur;
			cur = cur->_next;
		}
		printf("未找到\n");
		return NULL;
	}
}
void Insert(Node* pos, Datatype data)       //指定位置前插入   注意要考虑到如果指定位置不存在的情况
{
	if (_head == NULL)
	{
		printf("链表为空\n");
		return;
	}
	if (pos == _head)      //头插
	{
		PushFront(data);
		return;
	}
	Node* cur = _head;
	Node* prev = NULL;
	while (cur)
	{
		if (cur == pos)
		{
			Node* newnode = CreatNode(data);
			prev->_next = newnode;
			newnode->_next = cur;
			return;
		}
		prev = cur;
		cur = cur->_next;
	}
	printf("未找到指定位置\n");
	return;
}
void Erase(Node* pos)       //指定位置删除
{
	if (_head == NULL)
	{
		printf("链表为空\n");
		return;
	}
	if (pos == _head)
	{
		PopFront();
		return;
	}
	Node* cur = _head;
	Node* prev = NULL;
	//Node* nextnode = pos->_next;
	while (cur)
	{
		if (cur == pos)
		{
			prev->_next = pos->_next;
			free(pos);
			return;
		}
		prev = cur;
		cur = cur->_next;
	}
	printf("未找到指定位置\n");
	return;
}

void Remove(Datatype data)        //删除在链表第一次出现的该数
{
	Erase(Find(data));
}
void DestoryList()     //删除整个链表
{
	if (_head == NULL)
		return;
	if (_head->_next == NULL)
	{
		free(_head);
		_head = NULL;
		return;
	}
	Node* cur = _head;
	Node* tmp = NULL;
	while (cur)
	{
		tmp = cur;
		cur = cur->_next;
		free(tmp);
	}
	_head = NULL;
	return;
}
//***************基本的面试题部分*******************

//题目一：从尾到头打印单链表
//1.递归
void _RPrintList(Node* cur)
{
	if (cur == NULL)
		return;
	_RPrintList(cur->_next);
	printf("%d ", cur->_data);
}
//2.非递归： 利用栈（在C语言里面没有栈，所以這里這种方法很难实现）

//题目二：删除一个无头单链表的非尾结点
void TestErase(Node** pplist)           //传入二级指针
{
	assert(pplist);
	if (*pplist == NULL)
	{
		printf("链表为空");
		return;
	}
	//一个结点
	if ((*pplist)->_next == NULL)
	{
		printf("不满足要求\n");
		return;
	}
	//只有两个结点
	if ((*pplist)->_next->_next == NULL)
	{
		Node* tmp = *pplist;
		Node* endnode = (*pplist)->_next;
		*pplist = endnode;
		free(tmp);
	}
	//多个结点
	else
	{
		Node* cur = *pplist;
		Node* prev = NULL;
		while (cur->_next->_next)
		{
			prev = cur;
			cur = cur->_next;
		}
		Node* endnode = cur->_next;
		prev->_next = endnode;
		free(cur);
	}
}
//题目三无头单链表的非头节点之前插入一个结点
void TestInsert(Node** pplist,Datatype data)
{
	assert(pplist);
	if (*pplist == NULL)
	{
		printf("链表为空\n");
		return;
	}
	//只有一个结点
	if ((*pplist)->_next == NULL)
	{
		printf("不满足条件\n");
		return;
	}
	//不止一个结点，在第一个结点和第二个结点之间插入
	else
	{
		Node* next = (*pplist)->_next;
		Node* newnode = CreatNode(data);
		(*pplist)->_next = newnode;
		newnode->_next = next;
	}
}
//题目四：单链表实现约瑟夫环


//题目五： 逆置单链表[*]
void ReverseList(Node** pplist)
{
	assert(pplist);
	if ((*pplist) == NULL)
		return;
	if ((*pplist)->_next == NULL)
		return;
	else
	{
		Node* newList = NULL;
		Node* cur = *pplist;
		Node* prev = NULL;
		prev = cur;
		newList = prev;
		prev->_next = NULL;
		cur = cur->_next;
		while (cur)
		{
			Node* tmp = newList;
			prev = cur;
			cur = cur->_next;
			newList = prev;
			prev->_next = tmp;
		}
		*pplist = newList;
	}
}


void PrintList()         //打印
{
	if (_head == NULL)
	{
		printf("链表为空\n");
		return;
	}
	else
	{
		Node* cur = _head;
		while (cur)
		{
			printf("%d ",cur->_data);
			cur = cur->_next;
		}
	}
	printf("\n");
}

//-----------------------test------------------------
void TestList()
{
	/*PushBack(1);
	PushBack(2);
	PushBack(3);
	PushBack(4);
	PushBack(5);
	PushBack(6);
	PushFront(0);
	PushFront(6);
	PushFront(5);
	PushFront(4);
	PushFront(3);
	PopBack();
	PopBack();
	PopBack();
	PopBack();
	PopBack();
	PopFront();
	PopFront();*/
	/*PopFront();
	PopFront();
	PopFront();
	PopFront();*/
	//printf("%p ",Find(7));
	/*Insert(Find(0), 1);
	Insert(Find(5), 1);
	Insert(Find(2), 1);
	Erase(Find(0));
	Erase(Find(1));
	Erase(Find(1));
	Erase(Find(1));
	Erase(Find(1));
	Erase(Find(1));
	Remove(5);
	Remove(6);
	PrintList();
	PushBack(1);
	PushBack(2);
	PushBack(3);
	PushBack(4);
	PushBack(5);
	PushBack(6);
	PushBack(7);
	PushBack(8);
	PrintList();*/
	//DestoryList();
	//PrintList();
	// *******面试题测试******
	//_RPrintList(_head);
	/*TestErase(&_head);
	PrintList();
	TestErase(&_head);
	PrintList();
	TestErase(&_head);
	PrintList();
	TestErase(&_head);
	PrintList();
	TestErase(&_head);
	PrintList();
	TestErase(&_head);
	PrintList();
	TestErase(&_head);
	PrintList();
	TestErase(&_head);*/
	//PrintList();
	/*PushBack(5);
	PushBack(4);
	PushBack(3);
	PushBack(2);
	PrintList();
	TestInsert(&_head, 1);
	TestInsert(&_head, 1);
	PrintList();*/

	PushBack(0);
	PushBack(1);
	PushBack(2);
	PushBack(3);
	PushBack(4);
	PushBack(5);
	PrintList();
	ReverseList(&_head);
	PrintList();

}
int main()
{ 
	TestList();
	return 0;
}