/*
  2017��7��21�� 08:32:07
  ��1-100֮�����е��ܱ�3����������֮��
*/

# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i=3; i<=12; ++i)
	{
		if(i%3 == 0)  //���i�ܱ�3���� 
			sum = sum + i;

	}

	printf("sum = %d\n", sum);

	return 0;
}