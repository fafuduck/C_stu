# include <stdio.h>
int main(void)
{
	char ch = 'A';   // 第4行， OK   等价于 char ch; ch = 'A'
//	char ch = "AB"; // error  因为"AB"是字符串，我们不能把字符串赋给单个字符变量
//	char ch = "A";  // error  
//	char ch = 'AB'; //'AB'是错误的
//	char ch = 'B';  //因为ch变量已经在第4行中定义了，这样会导致变量名被重复定义
    ch = 'C';  // 正确  相当于把C的值赋给ch常量而不是重新去定义ch，就算再写个ch = 'D' 也是正确的

	printf("%c\n", ch);

	return 0;
}