# include <stdio.h>

int main(void)
{
	int i;
	float sum = 0;

	for (i=1; i<=100; ++i)
	{
		sum = sum + 1 / (float)i;    //��ok��
		//  sum = sum + (float)(1/i); ����д�ǲ��Ե�
		//  ���򵥵�д�� : sum = sum + 1.0/i;
	}
	printf("sum = %f\n", sum);   //float������%f�����

	return 0;
}