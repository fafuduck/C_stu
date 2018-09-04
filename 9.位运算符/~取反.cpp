# include <stdio.h>

int main(void)
{
	int i = 3;
	int j = 5;
	int k;

	k = ~i;    //   0011    ->  1100  符号位前面也取反  
	printf("%d\n", k);



	return 0;
}