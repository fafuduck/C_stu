/*
   2017��8��5�� 14:02:46
   �ж�һ�������Ƿ�������
   ֻ��һ������ʵ�֣����ã�����������ʲ���
*/
# include <stdio.h>

int main(void)
{
	int val;
	int i;

	scanf("%d", &val);
	for (i=2; i<val; ++i)
	{
		if (0 == val%i)
			break;
	}
	if(i == val)
		printf("Yes!\n");
	else
		printf("No!\n");
	
	return 0;
}