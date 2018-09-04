# include <stdio.h>

int f()
{
	return 10.5;  //因为函数的返回值类型是int，所以最终f的返回值是10而不是10.5
}

int main(void)
{
	int i = 99;
	double x = 6.5;

//	i = f();
//	printf("%d\n", i);

	x = f();
	printf("%lf\n", x);

	return 0;
}