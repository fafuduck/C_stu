/*
   2017��7��13�� 14:08:51
   
   �����������֣���Ҫ����һ����ʱ����

*/
# include <stdio.h>

int main(void)
{
	int i = 3;
	int j = 5;
	int t;  // ��ʱ����t

	t = i;
	i = j;
	j = t;

	printf("i = %d,j = %d\n", i, j);

	return 0;
}
