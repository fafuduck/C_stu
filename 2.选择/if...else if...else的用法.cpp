/*
    2017年7月13日 13:17:14

    目的：一定要搞清楚这个程序为什么会编译出错


*/


# include <stdio.h>

int main(void)
{
	double deleta = 3;

	if (deleta > 0)
		printf("有两个解\n");
	printf("哈哈！\n");          //这个"哈哈"中断了if...else if...else，所以编译会出错
	else if (deleta == 0)
		printf("有一个解\n");
	else
		printf("无解\n");

	return 0;
}