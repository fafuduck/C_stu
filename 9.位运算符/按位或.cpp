# include <stdio.h>

int main(void)
{
	int i = 3;
	int j = 5;
	int k;

	k = i | j;
	printf("%d\n", k);

	k = i || j;
	printf("%d\n", k);

	return 0;
}