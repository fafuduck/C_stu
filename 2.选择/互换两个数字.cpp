/*
   2017年7月13日 14:08:51
   
   互换两个数字，需要定义一个临时变量

*/
# include <stdio.h>

int main(void)
{
	int i = 3;
	int j = 5;
	int t;  // 临时变量t

	t = i;
	i = j;
	j = t;

	printf("i = %d,j = %d\n", i, j);

	return 0;
}
