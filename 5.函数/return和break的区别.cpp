# include <stdio.h>

void f(void)
{
	int i;

	for (i=0; i<5; ++i)
	{
		printf("���������!\n");
		//  break;   ��ֹforѭ��
		//  return;   return���治�ܼ�ֵ��ֻ��ֱ������return����Ϊfǰ����Ǹ�void�Ĵ��ڣ�����return���治�ܼ�ֵ������return����ֹ����������
		//            ������ֹforѭ���ģ�ֻҪִ�е�return������������ֹ��
	}
	printf("ͬ־�Ǻ�!\n");
}

int main(void)
{

	f();

	return 0;
}

