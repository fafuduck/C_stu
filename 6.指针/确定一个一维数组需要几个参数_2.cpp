/*
   2017年8月14日 15:45:31
   一定要明白10行的pArr[3] 和 17行 19行的a[3]  是同一个变量
*/
# include <stdio.h>

void f(int * pArr, int len)
{
	pArr[3] = 88;   //10行
}

int main(void)
{
	int a[6] = {1, 2, 3, 4, 5, 6};
	printf("%d\n", a[3]);   //4   17行

	f(a, 6);
	printf("%d\n", a[3]);   //88   19行
  
	return 0;
}

/*
   在Vc++6.0中输出的结果是:
--------------------
4
88
Press any key to continue
--------------------
*/