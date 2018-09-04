/*
    2017年7月21日 08:27:12
	求1-100之间的和
*/


# include <stdio.h>

int main(void)

{
	int i;
	int sum = 0;

	for (i=1; i<10; i+=2)  // i+=2  等价于	i = i + 2
	{
		sum = sum + i;          
	//  printf("今天我很高兴!\n");    //测试循环了几次，语句就执行了几次
	}

	printf("i = %d\n", i);         //测试i最终循环的值
    printf("sum = %d\n", sum);
	return 0;
}