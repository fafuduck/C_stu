/*
   2017��8��6�� 09:51:00
   һ��Ҫ���׸ó���Ϊʲô�Ǵ�ģ�
   ҲҪ���װ�9��12�д������14�к��棬Ϊʲô�����ok��
*/
# include <stdio.h>

void g()  //9��
{
	printf("k = %d\n", k);
}	// 12��

int k = 1000;  //ȫ�ֱ���   14��



void f(void)
{
	g();
	printf("k = %d\n", k);
}
int main(void)
{

	f();
	return 0;
}