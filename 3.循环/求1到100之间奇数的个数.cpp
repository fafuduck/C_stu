/*
  2017年7月23日 14:13:42
  求1到100之间的奇数的个数
*/
# include <stdio.h>

int main(void)
{
	int i;
	int cnt = 0;   //  个数一般用cnt表示	

	for (i=1; i<101; ++i)
	{
		if(i%2 == 1)
			++cnt;
	}
	printf("cnt = %d\n", cnt);

	return 0;
}