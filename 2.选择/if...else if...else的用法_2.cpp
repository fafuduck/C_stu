# include <stdio.h>

int main(void)
{
	float score;  //scoreΪ������Ӣ�ĵ���

	printf("���������ķ����� ");
	scanf("%f", &score);

	if (score > 100)
		printf("��������!\n");
	else if (score>=90 && score<100)
		printf("����!\n");
	else if (score>=80 && score<90)
		printf("����\n");
	else if (score>=60 && score<80)
		printf("����\n");
	else if(score>=0 && score<60)
		printf("������!����Ŭ��!\n");
	else
		printf("�㿼���żٿ���!!!!\n");

	return 0;
}
