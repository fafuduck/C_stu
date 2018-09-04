/* 
   2017年7月23日 14:08:19
   1到100之间的奇数之和
*/

# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i=1; i<101; ++i)
	{
		if (i%2 == 1)    //对2取余，就是奇数
			sum += i;   //sum = sum +i;
	}
	printf("sum = %d\n", sum);

	return 0;
}