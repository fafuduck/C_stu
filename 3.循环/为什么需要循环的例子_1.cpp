/*

  2017��7��16�� 08:41:09
  1+2+3+4+...+100

*/

# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i=1; i<=100; ++i)
		sum = sum + i;
	printf("sum = %d\n",sum);

	return 0;
}