# include <stdio.h>

int main(void)
{
	int i;

	i = 3;//3最终是存放在内存中的，程序终止后释放空间
	printf("i = %d\n", i);
	return 0;
}