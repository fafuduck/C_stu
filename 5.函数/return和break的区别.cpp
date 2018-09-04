# include <stdio.h>

void f(void)
{
	int i;

	for (i=0; i<5; ++i)
	{
		printf("大家辛苦了!\n");
		//  break;   终止for循环
		//  return;   return后面不能加值，只能直接输入return，因为f前面的那个void的存在，所以return后面不能加值；而且return是终止整个函数的
		//            不是终止for循环的，只要执行到return整个函数都终止。
	}
	printf("同志们好!\n");
}

int main(void)
{

	f();

	return 0;
}

