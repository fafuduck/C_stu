/* 
   2017��7��23�� 14:08:19
   1��100֮�������֮��
*/

# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i=1; i<101; ++i)
	{
		if (i%2 == 1)    //��2ȡ�࣬��������
			sum += i;   //sum = sum +i;
	}
	printf("sum = %d\n", sum);

	return 0;
}