# include <stdio.h>

void f(int ** q)   //q�Ǹ�ָ�����������q��ʲô���͵�ָ���������ֻռ4���ֽ�
{
	int i = 5;
	  //  *q�ȼ���p  q��**q�����ȼ���p
//	*q = i;   //  error ��Ϊ*q = i;   �ȼ���   p = &i;  ����д�Ǵ����
	*q = &i;
}

int main(void)
{
	int *p;   //  13��

	f(&p);
	printf("%d\n", *p);  //16��   ������﷨û�����⣬���߼���������

	return 0;
}