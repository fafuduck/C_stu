# include <stdio.h>

int main(void)
{
	int * p;  //p�Ǳ������֣� int *��ʾp������ŵ���int���ͱ����ĵ�ַ
	int i = 3;

	p = &i;  //  OK
//  p = i;   //  error,��Ϊ���Ͳ�һ�£�pֻ�ܴ��int�����ĵ�ַ�����ܴ��int������ֵ��
//	p = 55;  //  error,ԭ��ͬ��
	return 0;
}