# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>

struct Node
{
	int date;   // 数据域
	struct Node * pNext;  // 指针域
};  

// 函数声明
struct Node * create_list(void);
void traverse_list(struct Node * );

int main(void)
{
	struct Node * pHead = NULL;  //等价于strcut Node * pHead = NULL;

	pHead = create_list();  //create_list 功能：创建一个非循环单链表
	traverse_lsit(pHead);

	return 0;
}

struct Node * create_list(void)
{
	int len; //用来存放有效节点的个数
	int i; 
	int val;  //用来临时存放用户输入的节点的值

	//分配了一个不存放有效数据的头结点
	struct Node * pHead = (struct Node *)malloc(sizeof(struct Node));
	if (NULL == pHead)
	{
		printf("分配失败,程序终止!\n");
		exit(-1);   //终止程序
	}
	struct Node * pTail = pHead;
	pTail->pNext = NULL;

	printf("请输入您需要生成的链表节点的个数len = ");
	scanf("%d", &len);

	for (i=0; i<len; ++i)
	{
		printf("请输入第%个节点的值: ", i+1);
		scanf("%d", &val);

		struct Node * pNew = (struct Node *)malloc(sizeof(struct Node));
		if (NULL == pNew)
		{
			printf("分配失败，程序终止!\n");
			exit(-1);
		}
		pNew->data = val;
	    pTail->pNext = pNew;
	    pNew->pNext = NULL;
     	pTail = pNew;
	}
	return pHead;
}


bool empty_list(struct Node * pHead)
{
	if ( pHead->pNext == NULL)    // pHead->pNext 等价于 (*pHead).pNext
		return true;
	else
		return false;
}

void traverse_list(struct Node * pHead)
{
	/*
	if ( empty_list(pHead) )
	{
		printf("链表为空");
	}

*/

    struct Node * p = pHead->pNext;

	while (NULL != p)
	{
		printf("%d  ", p->data);
		p = p->pNext;
	}
	printf("\n");

	return;
	
}

