/*
  2017年7月21日 08:32:07
  求1-100之间所有的能被3整出的数字之和
*/

# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i=3; i<=12; ++i)
	{
		if(i%3 == 0)  //如果i能被3整除 
			sum = sum + i;

	}

	printf("sum = %d\n", sum);

	return 0;
}