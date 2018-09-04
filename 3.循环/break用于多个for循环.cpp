# include <stdio.h>

int main(void)
{
	int i,j;

	for (i=0; i<3; ++i)
	{
		for (j=1; j<4; ++j)
			break;            //break只能终止距离它最近的循环
		printf("我是天下第一大魔王!\n");
	}

	return 0;
}