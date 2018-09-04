/*
   2017年8月5日 13:38:44
   一定要明白该程序为什么会错误
   一定要明白该程序第9行生效之后程序为什么就正确了
*/
# include <stdio.h>

//  void f(void);  //函数的声明  9行

void g(void)
{
	f();   //因为函数f的定义，放在调用f语句的后面，所以语法出错
}

void f(void)
{
	printf("哈哈!\n");
}

int main(void)
{
	g();

	return 0;
}