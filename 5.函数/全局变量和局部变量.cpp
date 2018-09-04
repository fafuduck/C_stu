/*
   2017年8月6日 09:51:00
   一定要明白该程序为什么是错的；
   也要明白把9到12行代码放在14行后面，为什么程序就ok了
*/
# include <stdio.h>

void g()  //9行
{
	printf("k = %d\n", k);
}	// 12行

int k = 1000;  //全局变量   14行



void f(void)
{
	g();
	printf("k = %d\n", k);
}
int main(void)
{

	f();
	return 0;
}