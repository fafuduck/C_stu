# include <stdio.h>

int main(void)
{
	int i = 5;
	int j = 7;
	int k;

	k = i & j;
	printf("%d\n", k);

	k = i && j;     // k��ֵֻ���� 1 ���� 0 �� ��Ϊ&&���߼���������߼�������Ľ��ֻ�������٣���C����������1��ʾ������0��ʾ
	printf("%d\n", k);
	

	return 0;
}