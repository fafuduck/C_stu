/*
  2017��7��23�� 14:13:42
  ��1��100֮��������ĸ���
*/
# include <stdio.h>

int main(void)
{
	int i;
	int cnt = 0;   //  ����һ����cnt��ʾ	

	for (i=1; i<101; ++i)
	{
		if(i%2 == 1)
			++cnt;
	}
	printf("cnt = %d\n", cnt);

	return 0;
}