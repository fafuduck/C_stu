/*
   2017年8月5日 14:52:57
   用两个函数来实现求1到某个数字之间所有的素数，并将其输出
   本程序和 如何合理设计函数_4.Cpp 相比较
   代码量更少  可重用性更高
*/
# include <stdio.h>

//本函数的功能是判断m是否是素数，是返回true，否返回flase
bool IsPrime(int m)
{
	int i;

	for (i=2; i<m; ++i)
	{
		if (0 == m%i)
			break;
	}
	if (i == m)
		return true;
	else
		return false;
}

//本函数的功能是把1到n之间的所有素数在显示器上输出
void TraverseVal(int n)
{
	int i;

	for (i=2; i<=n; ++i)
	{
		if( IsPrime(i) )
			printf("%d\n", i);
	}
}


int main(void)
{
	int val;

	scanf("%d", &val);
	TraverseVal(val);

	
	
	return 0;
}