# include <stdio.h>

int main(void)
{
	int score;

	printf("请输入您的成绩：　");
	scanf("%d", &score);

	if (score > 100)
		printf("这是做梦!!!\n");
	else if(score<100 && score>=60)
		printf("合格!!!\n");
	else if(score<60 && score>=0)
		printf("不及格!!!\n");
//	else
//		printf("你考了假卷子!!!\n");

	return 0;
}
/*
把 else注释掉

  前面的写法程序语法不会有错误
  但是逻辑上有漏洞

*/