# include <stdio.h>

int main(void)
{
	if (3 > 2)
		printf("AAAA\n");   //输出是因为if控制的成立
	printf("BBBB\n");        //输出是因为本身就是输出

	return 0;
}
/*
	 在vc++6.0中输出的结果是：
------------------------
	 AAAA
	 BBBB
------------------------
    总结：
	   if默认的只能控制一个语句的执行或者不执行


*/