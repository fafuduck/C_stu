# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>

struct Node
{
	int date;   // ������
	struct Node * pNext;  // ָ����
};  

// ��������
struct Node * create_list(void);
void traverse_list(struct Node * );

int main(void)
{
	struct Node * pHead = NULL;  //�ȼ���strcut Node * pHead = NULL;

	pHead = create_list();  //create_list ���ܣ�����һ����ѭ��������
	traverse_lsit(pHead);

	return 0;
}

struct Node * create_list(void)
{
	int len; //���������Ч�ڵ�ĸ���
	int i; 
	int val;  //������ʱ����û�����Ľڵ��ֵ

	//������һ���������Ч���ݵ�ͷ���
	struct Node * pHead = (struct Node *)malloc(sizeof(struct Node));
	if (NULL == pHead)
	{
		printf("����ʧ��,������ֹ!\n");
		exit(-1);   //��ֹ����
	}
	struct Node * pTail = pHead;
	pTail->pNext = NULL;

	printf("����������Ҫ���ɵ�����ڵ�ĸ���len = ");
	scanf("%d", &len);

	for (i=0; i<len; ++i)
	{
		printf("�������%���ڵ��ֵ: ", i+1);
		scanf("%d", &val);

		struct Node * pNew = (struct Node *)malloc(sizeof(struct Node));
		if (NULL == pNew)
		{
			printf("����ʧ�ܣ�������ֹ!\n");
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
	if ( pHead->pNext == NULL)    // pHead->pNext �ȼ��� (*pHead).pNext
		return true;
	else
		return false;
}

void traverse_list(struct Node * pHead)
{
	/*
	if ( empty_list(pHead) )
	{
		printf("����Ϊ��");
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

