# include <stdio.h>

int main(void)
{
//	printf("哈哈!\n");  // \n表示换行


//	int i = 10;
//	printf("%d",i);  //   d是十进制


	int i = 5;
	int j = 6;
//	printf("%d %d\n",i,j);   //  OK，输出5 6

//	printf("%d\n",i,j);      //erorr,只输出一个参数，说明控制符要和参数一一对应

	printf("i = %d, j = %d\n",i,j);

	return 0;
}