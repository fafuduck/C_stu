# include <stdio.h>

int main(void)
{
	int i=0, s=0;

	do
	{
		if (i%2)
		{
			i++;
			continue;    //会跳到  下面  注释1 去执行
		}
		i++;
		s+=i;
	}while (i < 5);    //  注释1

	printf("%d\n", s);

	return 0;
}