# include <stdio.h>

int main(void)
{
	int i = 5;
	int j = 7;
	int k;

	k = i & j;
	printf("%d\n", k);

	k = i && j;     // k的值只能是 1 或者 0 ， 因为&&是逻辑运算符，逻辑运算符的结果只能是真或假，在C语言中真用1表示，假用0表示
	printf("%d\n", k);
	

	return 0;
}