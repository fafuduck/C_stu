/*
    2017��7��21�� 08:27:12
	��1-100֮��ĺ�
*/


# include <stdio.h>

int main(void)

{
	int i;
	int sum = 0;

	for (i=1; i<10; i+=2)  // i+=2  �ȼ���	i = i + 2
	{
		sum = sum + i;          
	//  printf("�����Һܸ���!\n");    //����ѭ���˼��Σ�����ִ���˼���
	}

	printf("i = %d\n", i);         //����i����ѭ����ֵ
    printf("sum = %d\n", sum);
	return 0;
}