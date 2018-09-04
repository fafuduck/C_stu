# include <stdio.h>

int f(void)  //括号中的void表示该函数不能接收数据    int表示函数返回值是int类型的数据
{
	return 10;  //主调函数返回10
}

 void g(void)  // 第8行  函数名前面的void表示该函数没有返回值
  {
//	  return 10;       //error ,  与8行 行首的void相矛盾
  }
int main(void)
{
	int j = 88;

	j = f();
	printf("%d\n", j);

	j = g();   // g没有返回值 error

	return 0;
}