# include <stdio.h>

int f()
{
	return 10.5;  //��Ϊ�����ķ���ֵ������int����������f�ķ���ֵ��10������10.5
}

int main(void)
{
	int i = 99;
	double x = 6.5;

//	i = f();
//	printf("%d\n", i);

	x = f();
	printf("%lf\n", x);

	return 0;
}