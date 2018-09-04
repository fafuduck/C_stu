# include <stdio.h>

int main(void)
{
	int i = 47;   //47表示十进制的47
	
	printf("%x\n",i);   //输出2f
	printf("%X\n",i);   //输出 2F
	printf("%#X\n",i);  //输出0X2F   //推荐使用
	printf("%#x\n",i);  //输出0x2f

	return 0;
}