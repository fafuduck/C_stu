# include <stdio.h>

int main(void)
{
	int score;

	printf("���������ĳɼ�����");
	scanf("%d", &score);

	if (score > 100)
		printf("��������!!!\n");
	else if(score<100 && score>=60)
		printf("�ϸ�!!!\n");
	else if(score<60 && score>=0)
		printf("������!!!\n");
//	else
//		printf("�㿼�˼پ���!!!\n");

	return 0;
}
/*
�� elseע�͵�

  ǰ���д�������﷨�����д���
  �����߼�����©��

*/