# include <stdio.h>

int main(void)
{
	float score;  //score为分数的英文单词

	printf("请输入您的分数： ");
	scanf("%f", &score);

	if (score > 100)
		printf("这是做梦!\n");
	else if (score>=90 && score<100)
		printf("优秀!\n");
	else if (score>=80 && score<90)
		printf("良好\n");
	else if (score>=60 && score<80)
		printf("及格\n");
	else if(score>=0 && score<60)
		printf("不及格!继续努力!\n");
	else
		printf("你考了张假考卷!!!!\n");

	return 0;
}
