/*
    2017��7��13�� 13:17:14

    Ŀ�ģ�һ��Ҫ������������Ϊʲô��������


*/


# include <stdio.h>

int main(void)
{
	double deleta = 3;

	if (deleta > 0)
		printf("��������\n");
	printf("������\n");          //���"����"�ж���if...else if...else�����Ա�������
	else if (deleta == 0)
		printf("��һ����\n");
	else
		printf("�޽�\n");

	return 0;
}